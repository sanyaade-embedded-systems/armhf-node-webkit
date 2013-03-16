
var Intl = (function() {
var Intl = {};

var AVAILABLE_SERVICES = ['collator',
			  'numberformat',
			  'dateformat',
			  'breakiterator'];
var AVAILABLE_LOCALES = {
  'collator': undefined,
  'numberformat': undefined,
  'dateformat': undefined,
  'breakiterator': undefined
};
var DEFAULT_ICU_LOCALE = undefined;
var UNICODE_EXTENSION_RE = new RegExp('-u(-[a-z0-9]{2,8})+', 'g');
var ANY_EXTENSION_RE = new RegExp('-[a-z0-9]{1}-.*', 'g');
var QUOTED_STRING_RE = new RegExp("'[^']+'", 'g');
var SERVICE_RE =
    new RegExp('^(collator|numberformat|dateformat|breakiterator)$');
var LANGUAGE_TAG_RE = undefined;
var LANGUAGE_VARIANT_RE = undefined;
var LANGUAGE_SINGLETON_RE = undefined;
var ICU_CALENDAR_MAP = {
  'gregorian': 'gregory',
  'japanese': 'japanese',
  'buddhist': 'buddhist',
  'roc': 'roc',
  'persian': 'persian',
  'islamic-civil': 'islamicc',
  'islamic': 'islamic',
  'hebrew': 'hebrew',
  'chinese': 'chinese',
  'indian': 'indian',
  'coptic': 'coptic',
  'ethiopic': 'ethiopic',
  'ethiopic-amete-alem': 'ethioaa'
};
var COLLATOR_KEY_MAP = {
  'kn': {'property': 'numeric', 'type': 'boolean'},
  'kf': {'property': 'caseFirst', 'type': 'string',
         'values': ['false', 'lower', 'upper']}
};
var NUMBER_FORMAT_KEY_MAP = {
  'nu': {'property': undefined, 'type': 'string'}
};
var DATETIME_FORMAT_KEY_MAP = {
  'ca': {'property': undefined, 'type': 'string'},
  'nu': {'property': undefined, 'type': 'string'}
};
var ALLOWED_CO_VALUES = [
  'big5han', 'dict', 'direct', 'ducet', 'gb2312', 'phonebk', 'phonetic',
  'pinyin', 'reformed', 'searchjl', 'stroke', 'trad', 'unihan', 'zhuyin'
];

function canonicalizeLanguageTag(localeID) {
  native function NativeJSCanonicalizeLanguageTag();
  if (typeof localeID !== 'string' && typeof localeID !== 'object' ||
      localeID === null) {
    throw new TypeError('Language ID should be string or object.');
  }
  var localeString = String(localeID);
  if (isValidLanguageTag(localeString) === false) {
    throw new RangeError('Invalid language tag: ' + localeString);
  }
  var tag = NativeJSCanonicalizeLanguageTag(localeString);
  if (tag === 'invalid-tag') {
    throw new RangeError('Invalid language tag: ' + localeString);
  }
  return tag;
}
function initializeLocaleList(locales) {
  var seen = [];
  if (locales === undefined) {
    seen = [];
  } else {
    if (typeof locales === 'string') {
      seen.push(canonicalizeLanguageTag(locales));
      return freezeArray(seen);
    }
    var o = toObject(locales);
    var len = o.length >>> 0;
    for (var k = 0; k < len; k++) {
      if (k in o) {
        var value = o[k];
        var tag = canonicalizeLanguageTag(value);
        if (seen.indexOf(tag) === -1) {
          seen.push(tag);
        }
      }
    }
  }
  return freezeArray(seen);
}
function isValidLanguageTag(locale) {
  if (LANGUAGE_TAG_RE.test(locale) === false) {
    return false;
  }
  locale = locale.split(/-x-/)[0];
  var variants = [];
  var extensions = [];
  var parts = locale.split(/-/);
  for (var i = 1; i < parts.length; i++) {
    var value = parts[i];
    if (LANGUAGE_VARIANT_RE.test(value) === true && extensions.length === 0) {
      if (variants.indexOf(value) === -1) {
        variants.push(value);
      } else {
        return false;
      }
    }
    if (LANGUAGE_SINGLETON_RE.test(value) === true) {
      if (extensions.indexOf(value) === -1) {
        extensions.push(value);
      } else {
        return false;
      }
    }
  }
  return true;
 }
(function() {
  var alpha = '[a-zA-Z]';
  var digit = '[0-9]';
  var alphanum = '(' + alpha + '|' + digit + ')';
  var regular = '(art-lojban|cel-gaulish|no-bok|no-nyn|zh-guoyu|zh-hakka|' +
                'zh-min|zh-min-nan|zh-xiang)';
  var irregular = '(en-GB-oed|i-ami|i-bnn|i-default|i-enochian|i-hak|' +
                  'i-klingon|i-lux|i-mingo|i-navajo|i-pwn|i-tao|i-tay|' +
                  'i-tsu|sgn-BE-FR|sgn-BE-NL|sgn-CH-DE)';
  var grandfathered = '(' + irregular + '|' + regular + ')';
  var privateUse = '(x(-' + alphanum + '{1,8})+)';
  var singleton = '(' + digit + '|[A-WY-Za-wy-z])';
  LANGUAGE_SINGLETON_RE = new RegExp('^' + singleton + '$', 'i');
  var extension = '(' + singleton + '(-' + alphanum + '{2,8})+)';
  var variant = '(' + alphanum + '{5,8}|(' + digit + alphanum + '{3}))';
  LANGUAGE_VARIANT_RE = new RegExp('^' + variant + '$', 'i');
  var region = '(' + alpha + '{2}|' + digit + '{3})';
  var script = '(' + alpha + '{4})';
  var extLang = '(' + alpha + '{3}(-' + alpha + '{3}){0,2})';
  var language = '(' + alpha + '{2,3}(-' + extLang + ')?|' + alpha + '{4}|' +
                 alpha + '{5,8})';
  var langTag = language + '(-' + script + ')?(-' + region + ')?(-' +
                variant + ')*(-' + extension + ')*(-' + privateUse + ')?';
  var languageTag =
      '^(' + langTag + '|' + privateUse + '|' + grandfathered + ')$';
  LANGUAGE_TAG_RE = new RegExp(languageTag, 'i');
})();

function initializeCollator(collator, locales, options) {
  native function NativeJSCreateCollator();
  if (collator.hasOwnProperty('__initializedIntlObject')) {
    throw new TypeError('Trying to re-initialize Collator object.');
  }
  if (options === undefined) {
    options = {};
  }
  var getOption = getGetOption(options, 'collator');
  var internalOptions = {};
  defineWEProperty(internalOptions, 'usage', getOption(
    'usage', 'string', ['sort', 'search'], 'sort'));
  var sensitivity = getOption('sensitivity', 'string',
                              ['base', 'accent', 'case', 'variant']);
  if (sensitivity === undefined && internalOptions.usage === 'sort') {
    sensitivity = 'variant';
  }
  defineWEProperty(internalOptions, 'sensitivity', sensitivity);
  defineWEProperty(internalOptions, 'ignorePunctuation', getOption(
    'ignorePunctuation', 'boolean', undefined, false));
  var locale = resolveLocale('collator', locales, options);
  var extensionMap = parseExtension(locale.extension);
  setOptions(
      options, extensionMap, COLLATOR_KEY_MAP, getOption, internalOptions);
  var collation = 'default';
  var extension = '';
  if (extensionMap.hasOwnProperty('co') && internalOptions.usage === 'sort') {
    if (ALLOWED_CO_VALUES.indexOf(extensionMap.co) !== -1) {
      extension = '-u-co-' + extensionMap.co;
      collation = extensionMap.co;
    }
  } else if (internalOptions.usage === 'search') {
    extension = '-u-co-search';
  }
  defineWEProperty(internalOptions, 'collation', collation);
  var requestedLocale = locale.locale + extension;
  var resolved = Object.defineProperties({}, {
    caseFirst: {writable: true},
    collation: {value: internalOptions.collation, writable: true},
    ignorePunctuation: {writable: true},
    locale: {writable: true},
    numeric: {writable: true},
    requestedLocale: {value: requestedLocale, writable: true},
    sensitivity: {writable: true},
    strength: {writable: true},
    usage: {value: internalOptions.usage, writable: true}
  });
  var internalCollator = NativeJSCreateCollator(requestedLocale,
                                                internalOptions,
                                                resolved);
  Object.defineProperty(collator, 'collator', {value: internalCollator});
  Object.defineProperty(collator, '__initializedIntlObject',
                        {value: 'collator'});
  Object.defineProperty(collator, 'resolved', {value: resolved});
  return collator;
}
Intl.Collator = function(locales, options) {
  if (!this || this === Intl) {
    return new Intl.Collator(locales, options);
  }
  return initializeCollator(toObject(this), locales, options);
};
Intl.Collator.prototype.resolvedOptions = function() {
  if (!this || typeof this !== 'object' ||
      this.__initializedIntlObject !== 'collator') {
    throw new TypeError(['resolvedOptions method called on a non-object',
                         ' or on a object that is not Collator.'].join(''));
  }
  var coll = this;
  var locale = getOptimalLanguageTag(coll.resolved.requestedLocale,
                                     coll.resolved.locale);
  return {
    locale: locale,
    usage: coll.resolved.usage,
    sensitivity: coll.resolved.sensitivity,
    ignorePunctuation: coll.resolved.ignorePunctuation,
    numeric: coll.resolved.numeric,
    caseFirst: coll.resolved.caseFirst,
    collation: coll.resolved.collation
  };
};
Intl.Collator.supportedLocalesOf = function(locales, options) {
  return supportedLocalesOf('collator', locales, options);
};
function compare(collator, x, y) {
  native function NativeJSInternalCompare();
  return NativeJSInternalCompare(collator.collator, String(x), String(y));
};
addBoundMethod(Intl.Collator, 'compare', compare, 2);

function isWellFormedCurrencyCode(currency) {
  if (typeof currency !== "string") {
    return false;
  }
  var code = String(currency);
  if (code.length !== 3) {
    return false;
  }
  if (code.match(/[^A-Za-z]/) !== null) {
    return false;
  }
  return true;
}
function initializeNumberFormat(numberFormat, locales, options) {
  native function NativeJSCreateNumberFormat();
  if (numberFormat.hasOwnProperty('__initializedIntlObject')) {
    throw new TypeError('Trying to re-initialize NumberFormat object.');
  }
  if (options === undefined) {
    options = {};
  }
  var getOption = getGetOption(options, 'numberformat');
  var locale = resolveLocale('numberformat', locales, options);
  var internalOptions = {};
  defineWEProperty(internalOptions, 'style', getOption(
    'style', 'string', ['decimal', 'percent', 'currency'], 'decimal'));
  var currency = getOption('currency', 'string');
  if (currency && !isWellFormedCurrencyCode(currency)) {
    throw new RangeError('Invalid currency code: ' + currency);
  }
  if (internalOptions.style === 'currency' && currency === undefined) {
    throw new TypeError('Currency code is required with currency style.');
  }
  var currencyDisplay = getOption(
      'currencyDisplay', 'string', ['code', 'symbol', 'name'], 'symbol');
  if (internalOptions.style === 'currency') {
    defineWEProperty(internalOptions, 'currency', currency.toUpperCase());
    defineWEProperty(internalOptions, 'currencyDisplay', currencyDisplay);
  }
  var digitRanges = ['minimumIntegerDigits', 'minimumFractionDigits',
                     'maximumFractionDigits', 'minimumSignificantDigits',
                     'maximumSignificantDigits'];
  for (var i = 0; i < digitRanges.length; i++) {
    var range = digitRanges[i];
    var digits = options[range];
    if (digits !== undefined && (digits >= 0 && digits <= 21)) {
      defineWEProperty(internalOptions, range, Number(digits));
    }
  }
  defineWEProperty(internalOptions, 'useGrouping', getOption(
    'useGrouping', 'boolean', undefined, true));
  var extensionMap = parseExtension(locale.extension);
  var extension = setOptions(options, extensionMap, NUMBER_FORMAT_KEY_MAP,
                             getOption, internalOptions);
  var requestedLocale = locale.locale + extension;
  var resolved = Object.defineProperties({}, {
    currency: {writable: true},
    currencyDisplay: {writable: true},
    locale: {writable: true},
    maximumFractionDigits: {writable: true},
    minimumFractionDigits: {writable: true},
    minimumIntegerDigits: {writable: true},
    numberingSystem: {writable: true},
    requestedLocale: {value: requestedLocale, writable: true},
    style: {value: internalOptions.style, writable: true},
    useGrouping: {writable: true}
  });
  if (internalOptions.hasOwnProperty('minimumSignificantDigits')) {
    defineWEProperty(resolved, 'minimumSignificantDigits', undefined);
  }
  if (internalOptions.hasOwnProperty('maximumSignificantDigits')) {
    defineWEProperty(resolved, 'maximumSignificantDigits', undefined);
  }
  var formatter = NativeJSCreateNumberFormat(requestedLocale,
                                             internalOptions,
                                             resolved);
  if (internalOptions.style === 'currency') {
    Object.defineProperty(resolved, 'currencyDisplay', {value: currencyDisplay,
                                                        writable: true});
  }
  Object.defineProperty(numberFormat, 'formatter', {value: formatter});
  Object.defineProperty(numberFormat, 'resolved', {value: resolved});
  Object.defineProperty(numberFormat, '__initializedIntlObject',
                        {value: 'numberformat'});
  return numberFormat;
}
Intl.NumberFormat = function(locales, options) {
  if (!this || this === Intl) {
    return new Intl.NumberFormat(locales, options);
  }
  return initializeNumberFormat(toObject(this), locales, options);
};
Intl.NumberFormat.prototype.resolvedOptions = function() {
  if (!this || typeof this !== 'object' ||
      this.__initializedIntlObject !== 'numberformat') {
    throw new TypeError(['resolvedOptions method called on a non-object',
                         ' or on a object that is not NumberFormat.'].join(''));
  }
  var format = this;
  var locale = getOptimalLanguageTag(format.resolved.requestedLocale,
                                     format.resolved.locale);
  var result = {
    locale: locale,
    numberingSystem: format.resolved.numberingSystem,
    style: format.resolved.style,
    useGrouping: format.resolved.useGrouping,
    minimumIntegerDigits: format.resolved.minimumIntegerDigits,
    minimumFractionDigits: format.resolved.minimumFractionDigits,
    maximumFractionDigits: format.resolved.maximumFractionDigits,
  };
  if (result.style === 'currency') {
    defineWECProperty(result, 'currency', format.resolved.currency);
    defineWECProperty(result, 'currencyDisplay',
                      format.resolved.currencyDisplay);
  }
  if (format.resolved.hasOwnProperty('minimumSignificantDigits')) {
    defineWECProperty(result, 'minimumSignificantDigits',
                      format.resolved.minimumSignificantDigits);
  }
  if (format.resolved.hasOwnProperty('maximumSignificantDigits')) {
    defineWECProperty(result, 'maximumSignificantDigits',
                      format.resolved.maximumSignificantDigits);
  }
  return result;
};
Intl.NumberFormat.supportedLocalesOf = function(locales, options) {
  return supportedLocalesOf('numberformat', locales, options);
};
function formatNumber(formatter, value) {
  native function NativeJSInternalNumberFormat();
  var number = Number(value);
  if (number === -0) {
    number = 0;
  }
  return NativeJSInternalNumberFormat(formatter.formatter, number);
}
function parseNumber(formatter, value) {
  native function NativeJSInternalNumberParse();
  return NativeJSInternalNumberParse(formatter.formatter, String(value));
}
addBoundMethod(Intl.NumberFormat, 'format', formatNumber, 1);
addBoundMethod(Intl.NumberFormat, 'v8Parse', parseNumber, 1);

function toLDMLString(options) {
  var getOption = getGetOption(options, 'dateformat');
  var ldmlString = '';
  var option = getOption('weekday', 'string', ['narrow', 'short', 'long']);
  ldmlString += appendToLDMLString(
      option, {narrow: 'EEEEE', short: 'EEE', long: 'EEEE'});
  option = getOption('era', 'string', ['narrow', 'short', 'long']);
  ldmlString += appendToLDMLString(
      option, {narrow: 'GGGGG', short: 'GGG', long: 'GGGG'});
  option = getOption('year', 'string', ['2-digit', 'numeric']);
  ldmlString += appendToLDMLString(option, {'2-digit': 'yy', 'numeric': 'y'});
  option = getOption('month', 'string',
                     ['2-digit', 'numeric', 'narrow', 'short', 'long']);
  ldmlString += appendToLDMLString(option, {'2-digit': 'MM', 'numeric': 'M',
          'narrow': 'MMMMM', 'short': 'MMM', 'long': 'MMMM'});
  option = getOption('day', 'string', ['2-digit', 'numeric']);
  ldmlString += appendToLDMLString(
      option, {'2-digit': 'dd', 'numeric': 'd'});
  var hr12 = getOption('hour12', 'boolean');
  option = getOption('hour', 'string', ['2-digit', 'numeric']);
  if (hr12 === undefined) {
    ldmlString += appendToLDMLString(option, {'2-digit': 'jj', 'numeric': 'j'});
  } else if (hr12 === true) {
    ldmlString += appendToLDMLString(option, {'2-digit': 'hh', 'numeric': 'h'});
  } else {
    ldmlString += appendToLDMLString(option, {'2-digit': 'HH', 'numeric': 'H'});
  }
  option = getOption('minute', 'string', ['2-digit', 'numeric']);
  ldmlString += appendToLDMLString(option, {'2-digit': 'mm', 'numeric': 'm'});
  option = getOption('second', 'string', ['2-digit', 'numeric']);
  ldmlString += appendToLDMLString(option, {'2-digit': 'ss', 'numeric': 's'});
  option = getOption('timeZoneName', 'string', ['short', 'long']);
  ldmlString += appendToLDMLString(option, {short: 'v', long: 'vv'});
  return ldmlString;
}
function appendToLDMLString(option, pairs) {
  if (option !== undefined) {
    return pairs[option];
  } else {
    return '';
  }
}
function fromLDMLString(ldmlString) {
  ldmlString = ldmlString.replace(QUOTED_STRING_RE, '');
  var options = {};
  var match = ldmlString.match(/E{3,5}/g);
  options = appendToDateTimeObject(
      options, 'weekday', match, {EEEEE: 'narrow', EEE: 'short', EEEE: 'long'});
  match = ldmlString.match(/G{3,5}/g);
  options = appendToDateTimeObject(
      options, 'era', match, {GGGGG: 'narrow', GGG: 'short', GGGG: 'long'});
  match = ldmlString.match(/y{1,2}/g);
  options = appendToDateTimeObject(
      options, 'year', match, {y: 'numeric', yy: '2-digit'});
  match = ldmlString.match(/M{1,5}/g);
  options = appendToDateTimeObject(options, 'month', match, {MM: '2-digit',
      M: 'numeric', MMMMM: 'narrow', MMM: 'short', MMMM: 'long'});
  match = ldmlString.match(/L{1,5}/g);
  options = appendToDateTimeObject(options, 'month', match, {LL: '2-digit',
      L: 'numeric', LLLLL: 'narrow', LLL: 'short', LLLL: 'long'});
  match = ldmlString.match(/d{1,2}/g);
  options = appendToDateTimeObject(
      options, 'day', match, {d: 'numeric', dd: '2-digit'});
  match = ldmlString.match(/h{1,2}/g);
  if (match !== null) {
    options['hour12'] = true;
  }
  options = appendToDateTimeObject(
      options, 'hour', match, {h: 'numeric', hh: '2-digit'});
  match = ldmlString.match(/H{1,2}/g);
  if (match !== null) {
    options['hour12'] = false;
  }
  options = appendToDateTimeObject(
      options, 'hour', match, {H: 'numeric', HH: '2-digit'});
  match = ldmlString.match(/m{1,2}/g);
  options = appendToDateTimeObject(
      options, 'minute', match, {m: 'numeric', mm: '2-digit'});
  match = ldmlString.match(/s{1,2}/g);
  options = appendToDateTimeObject(
      options, 'second', match, {s: 'numeric', ss: '2-digit'});
  match = ldmlString.match(/v{1,2}/g);
  options = appendToDateTimeObject(
      options, 'timeZoneName', match, {v: 'short', vv: 'long'});
  return options;
}
function appendToDateTimeObject(options, option, match, pairs) {
  if (match === null) {
    if (!options.hasOwnProperty(option)) {
      defineWEProperty(options, option, undefined);
    }
    return options;
  }
  var property = match[0];
  defineWEProperty(options, option, pairs[property]);
  return options;
}
function toDateTimeOptions(options, required, defaults) {
  if (options === undefined) {
    options = null;
  } else {
    options = toObject(options);
  }
  options = Object.apply(this, [options]);
  var needsDefault = true;
  if ((required === 'date' || required === 'any') &&
      (options.weekday !== undefined || options.year !== undefined ||
       options.month !== undefined || options.day !== undefined)) {
    needsDefault = false;
  }
  if ((required === 'time' || required === 'any') &&
      (options.hour !== undefined || options.minute !== undefined ||
       options.second !== undefined)) {
    needsDefault = false;
  }
  if (needsDefault && (defaults === 'date' || defaults === 'all')) {
    Object.defineProperty(options, 'year', {value: 'numeric',
                                            writable: true,
                                            enumerable: true,
                                            configurable: true});
    Object.defineProperty(options, 'month', {value: 'numeric',
                                             writable: true,
                                             enumerable: true,
                                             configurable: true});
    Object.defineProperty(options, 'day', {value: 'numeric',
                                           writable: true,
                                           enumerable: true,
                                           configurable: true});
  }
  if (needsDefault && (defaults === 'time' || defaults === 'all')) {
    Object.defineProperty(options, 'hour', {value: 'numeric',
                                            writable: true,
                                            enumerable: true,
                                            configurable: true});
    Object.defineProperty(options, 'minute', {value: 'numeric',
                                              writable: true,
                                              enumerable: true,
                                              configurable: true});
    Object.defineProperty(options, 'second', {value: 'numeric',
                                              writable: true,
                                              enumerable: true,
                                              configurable: true});
  }
  return options;
}
function initializeDateTimeFormat(dateFormat, locales, options) {
  native function NativeJSCreateDateTimeFormat();
  if (dateFormat.hasOwnProperty('__initializedIntlObject')) {
    throw new TypeError('Trying to re-initialize DateTimeFormat object.');
  }
  if (options === undefined) {
    options = {};
  }
  var locale = resolveLocale('dateformat', locales, options);
  options = toDateTimeOptions(options, 'any', 'date');
  var getOption = getGetOption(options, 'dateformat');
  var matcher = getOption('formatMatcher', 'string',
                          ['basic', 'best fit'], 'best fit');
  var ldmlString = toLDMLString(options);
  var tz = options.timeZone;
  var internalOptions = {};
  var extensionMap = parseExtension(locale.extension);
  var extension = setOptions(options, extensionMap, DATETIME_FORMAT_KEY_MAP,
                             getOption, internalOptions);
  var requestedLocale = locale.locale + extension;
  var resolved = Object.defineProperties({}, {
    calendar: {writable: true},
    day: {writable: true},
    era: {writable: true},
    hour12: {writable: true},
    hour: {writable: true},
    locale: {writable: true},
    minute: {writable: true},
    month: {writable: true},
    numberingSystem: {writable: true},
    pattern: {writable: true},
    requestedLocale: {value: requestedLocale, writable: true},
    second: {writable: true},
    timeZone: {writable: true},
    timeZoneName: {writable: true},
    tz: {value: tz, writable: true},
    weekday: {writable: true},
    year: {writable: true}
  });
  var formatter = NativeJSCreateDateTimeFormat(
    requestedLocale, {skeleton: ldmlString, timeZone: tz}, resolved);
  checkTimeZone(tz, resolved.timeZone);
  Object.defineProperty(dateFormat, 'formatter', {value: formatter});
  Object.defineProperty(dateFormat, 'resolved', {value: resolved});
  Object.defineProperty(dateFormat, '__initializedIntlObject',
                        {value: 'dateformat'});
  return dateFormat;
}
Intl.DateTimeFormat = function(locales, options) {
  if (!this || this === Intl) {
    return new Intl.DateTimeFormat(locales, options);
  }
  return initializeDateTimeFormat(toObject(this), locales, options);
};
Intl.DateTimeFormat.prototype.resolvedOptions = function() {
  if (!this || typeof this !== 'object' ||
      this.__initializedIntlObject !== 'dateformat') {
    throw new TypeError(['resolvedOptions method called on a non-object or ',
                         'on a object that is not DateTimeFormat.'].join(''));
  }
  var format = this;
  var fromPattern = fromLDMLString(format.resolved.pattern);
  var userCalendar = ICU_CALENDAR_MAP[format.resolved.calendar];
  if (userCalendar === undefined) {
    userCalendar = format.resolved.calendar;
  }
  var locale = getOptimalLanguageTag(format.resolved.requestedLocale,
                                     format.resolved.locale);
  var tz = format.resolved.timeZone;
  if (tz === 'GMT') {
    tz = 'UTC';
  }
  var result = {
    locale: locale,
    numberingSystem: format.resolved.numberingSystem,
    calendar: userCalendar,
    timeZone: tz
  };
  addWECPropertyIfDefined(result, 'timeZoneName', fromPattern.timeZoneName);
  addWECPropertyIfDefined(result, 'era', fromPattern.era);
  addWECPropertyIfDefined(result, 'year', fromPattern.year);
  addWECPropertyIfDefined(result, 'month', fromPattern.month);
  addWECPropertyIfDefined(result, 'day', fromPattern.day);
  addWECPropertyIfDefined(result, 'weekday', fromPattern.weekday);
  addWECPropertyIfDefined(result, 'hour12', fromPattern.hour12);
  addWECPropertyIfDefined(result, 'hour', fromPattern.hour);
  addWECPropertyIfDefined(result, 'minute', fromPattern.minute);
  addWECPropertyIfDefined(result, 'second', fromPattern.second);
  return result;
};
Intl.DateTimeFormat.supportedLocalesOf = function(locales, options) {
  return supportedLocalesOf('dateformat', locales, options);
};
function formatDate(formatter, dateValue) {
  native function NativeJSInternalDateFormat();
  var dateMs;
  if (dateValue === undefined) {
    dateMs = Date.now();
  } else {
    dateMs = Number(dateValue);
  }
  if (!isFinite(dateMs)) {
    throw new RangeError('Provided date is not in valid range.');
  }
  return NativeJSInternalDateFormat(formatter.formatter, new Date(dateMs));
}
function parseDate(formatter, value) {
  native function NativeJSInternalDateParse();
  return NativeJSInternalDateParse(formatter.formatter, String(value));
}
addBoundMethod(Intl.DateTimeFormat, 'format', formatDate, 0);
addBoundMethod(Intl.DateTimeFormat, 'v8Parse', parseDate, 1);
function checkTimeZone(original, resolved) {
  if (original === undefined) {
    return;
  }
  var upperTimeZone = original.toUpperCase();
  if ((upperTimeZone === 'UTC' || upperTimeZone == 'GMT') &&
      resolved === 'GMT') {
    return;
  }
  var canonicalOriginal = original.replace(':', '').toLowerCase();
  var canonicalResolved = resolved.replace(':', '').toLowerCase();
  if (canonicalOriginal !== canonicalResolved) {
    throw new RangeError('Unsupported time zone provided: ' + original);
  }
}

function initializeBreakIterator(iterator, locales, options) {
  native function NativeJSCreateBreakIterator();
  if (iterator.hasOwnProperty('__initializedIntlObject')) {
    throw new TypeError('Trying to re-initialize v8BreakIterator object.');
  }
  if (options === undefined) {
    options = {};
  }
  var getOption = getGetOption(options, 'breakiterator');
  var internalOptions = {};
  defineWEProperty(internalOptions, 'type', getOption(
    'type', 'string', ['character', 'word', 'sentence', 'line'], 'word'));
  var locale = resolveLocale('breakiterator', locales, options);
  var resolved = Object.defineProperties({}, {
    requestedLocale: {value: locale.locale, writable: true},
    type: {value: internalOptions.type, writable: true},
    locale: {writable: true}
  });
  var internalIterator = NativeJSCreateBreakIterator(locale.locale,
                                                     internalOptions,
                                                     resolved);
  Object.defineProperty(iterator, 'iterator', {value: internalIterator});
  Object.defineProperty(iterator, 'resolved', {value: resolved});
  Object.defineProperty(iterator, '__initializedIntlObject',
                        {value: 'breakiterator'});
  return iterator;
}
Intl.v8BreakIterator = function(locales, options) {
  if (!this || this === Intl) {
    return new Intl.v8BreakIterator(locales, options);
  }
  return initializeBreakIterator(toObject(this), locales, options);
};
Intl.v8BreakIterator.prototype.resolvedOptions = function() {
  if (!this || typeof this !== 'object' ||
      this.__initializedIntlObject !== 'breakiterator') {
    throw new TypeError(['resolvedOptions method called on a non-object or',
                         ' on a object that is not v8BreakIterator.'].join(''));
  }
  var segmenter = this;
  var locale = getOptimalLanguageTag(segmenter.resolved.requestedLocale,
                                     segmenter.resolved.locale);
  return {
    locale: locale,
    type: segmenter.resolved.type
  };
};
Intl.v8BreakIterator.supportedLocalesOf = function(locales, options) {
  return supportedLocalesOf('breakiterator', locales, options);
};
function adoptText(iterator, text) {
  native function NativeJSBreakIteratorAdoptText();
  NativeJSBreakIteratorAdoptText(iterator.iterator, String(text));
}
function first(iterator) {
  native function NativeJSBreakIteratorFirst();
  return NativeJSBreakIteratorFirst(iterator.iterator);
}
function next(iterator) {
  native function NativeJSBreakIteratorNext();
  return NativeJSBreakIteratorNext(iterator.iterator);
}
function current(iterator) {
  native function NativeJSBreakIteratorCurrent();
  return NativeJSBreakIteratorCurrent(iterator.iterator);
}
function breakType(iterator) {
  native function NativeJSBreakIteratorBreakType();
  return NativeJSBreakIteratorBreakType(iterator.iterator);
}
addBoundMethod(Intl.v8BreakIterator, 'adoptText', adoptText, 1);
addBoundMethod(Intl.v8BreakIterator, 'first', first, 0);
addBoundMethod(Intl.v8BreakIterator, 'next', next, 0);
addBoundMethod(Intl.v8BreakIterator, 'current', current, 0);
addBoundMethod(Intl.v8BreakIterator, 'breakType', breakType, 0);

function addBoundMethod(obj, methodName, implementation, length) {
  Object.defineProperty(obj.prototype, methodName, {
    get: function() {
      if (!this || typeof this !== 'object' ||
          this.__initializedIntlObject === undefined) {
        throw new TypeError(['Method ', methodName, ' called on a non-object',
                             ' or on a wrong type of object.'].join(''));
      }
      var internalName = ['__bound', methodName, '__'].join('');
      if (this[internalName] === undefined) {
        var that = this;
        var boundMethod;
        if (length === undefined || length === 2) {
          boundMethod = function(x, y) {
            return implementation(that, x, y);
          }
        } else if (length === 1) {
          boundMethod = function(x) {
            return implementation(that, x);
          }
        } else {
          boundMethod = function() {
	    if (arguments.length > 0) {
              return implementation(that, arguments[0]);
	    } else {
	      return implementation(that);
	    }
          }
        }
        this[internalName] = boundMethod;
      }
      return this[internalName];
    },
    enumerable: false,
    configurable: true
  });
}
function supportedLocalesOf(service, locales, options) {
  if (service.match(SERVICE_RE) === null) {
    throw new Error('Internal error, wrong service type: ' + service);
  }
  if (options === undefined) {
    options = {};
  } else {
    options = toObject(options);
  }
  var matcher = options.localeMatcher;
  if (matcher !== undefined) {
    matcher = String(matcher);
    if (matcher !== 'lookup' && matcher !== 'best fit') {
      throw new RangeError('Illegal value for localeMatcher:' + matcher);
    }
  } else {
    matcher = 'best fit';
  }
  var requestedLocales = initializeLocaleList(locales);
  if (AVAILABLE_LOCALES[service] === undefined) {
    AVAILABLE_LOCALES[service] = getAvailableLocalesOf(service);
  }
  if (matcher === 'best fit') {
    return initializeLocaleList(bestFitSupportedLocalesOf(
        requestedLocales, AVAILABLE_LOCALES[service]));
  }
  return initializeLocaleList(lookupSupportedLocalesOf(
      requestedLocales, AVAILABLE_LOCALES[service]));
}
function lookupSupportedLocalesOf(requestedLocales, availableLocales) {
  var matchedLocales = [];
  for (var i = 0; i < requestedLocales.length; ++i) {
    var locale = requestedLocales[i].replace(UNICODE_EXTENSION_RE, '');
    do {
      if (availableLocales[locale] !== undefined) {
        matchedLocales.push(requestedLocales[i]);
        break;
      }
      var pos = locale.lastIndexOf('-');
      if (pos === -1) {
        break;
      }
      locale = locale.substring(0, pos);
    } while (true);
  }
  return matchedLocales;
}
function bestFitSupportedLocalesOf(requestedLocales, availableLocales) {
  return lookupSupportedLocalesOf(requestedLocales, availableLocales);
}
function getGetOption(options, caller) {
  if (options === undefined) {
    throw new Error('Internal ' + caller + ' error. ' +
                    'Default options are missing.');
  }
  function getOption(property, type, values, defaultValue) {
    if (options[property] !== undefined) {
      var value = options[property];
      switch (type) {
        case 'boolean':
          value = Boolean(value);
          break;
        case 'string':
          value = String(value);
          break;
        case 'number':
          value = Number(value);
          break;
        default:
          throw new Error('Internal error. Wrong value type.');
      }
      if (values !== undefined && values.indexOf(value) === -1) {
        throw new RangeError('Value ' + value + ' out of range for ' + caller +
                             ' options property ' + property);
      }
      return value;
    }
    return defaultValue;
  }
  return getOption;
}
function resolveLocale(service, requestedLocales, options) {
  requestedLocales = initializeLocaleList(requestedLocales);
  var getOption = getGetOption(options, service);
  var matcher = getOption('localeMatcher', 'string',
                          ['lookup', 'best fit'], 'best fit');
  var resolved;
  if (matcher === 'lookup') {
    resolved = lookupMatcher(service, requestedLocales);
  } else {
    resolved = bestFitMatcher(service, requestedLocales);
  }
  return resolved;
}
function lookupMatcher(service, requestedLocales) {
  native function NativeJSGetDefaultICULocale();
  if (service.match(SERVICE_RE) === null) {
    throw new Error('Internal error, wrong service type: ' + service);
  }
  if (AVAILABLE_LOCALES[service] === undefined) {
    AVAILABLE_LOCALES[service] = getAvailableLocalesOf(service);
  }
  for (var i = 0; i < requestedLocales.length; ++i) {
    var locale = requestedLocales[i].replace(ANY_EXTENSION_RE, '');
    do {
      if (AVAILABLE_LOCALES[service][locale] !== undefined) {
        var extensionMatch = requestedLocales[i].match(UNICODE_EXTENSION_RE);
        var extension = (extensionMatch === null) ? '' : extensionMatch[0];
        return {'locale': locale, 'extension': extension, 'position': i};
      }
      var pos = locale.lastIndexOf('-');
      if (pos === -1) {
        break;
      }
      locale = locale.substring(0, pos);
    } while (true);
  }
  if (DEFAULT_ICU_LOCALE === undefined) {
    DEFAULT_ICU_LOCALE = NativeJSGetDefaultICULocale();
  }
  return {'locale': DEFAULT_ICU_LOCALE, 'extension': '', 'position': -1};
}
function bestFitMatcher(service, requestedLocales) {
  return lookupMatcher(service, requestedLocales);
}
function parseExtension(extension) {
  var extensionSplit = extension.split('-');
  if (extensionSplit.length <= 2 ||
      (extensionSplit[0] !== '' && extensionSplit[1] !== 'u')) {
    return {};
  }
  var extensionMap = {};
  var previousKey = undefined;
  for (var i = 2; i < extensionSplit.length; ++i) {
    var length = extensionSplit[i].length;
    var element = extensionSplit[i];
    if (length === 2) {
      extensionMap[element] = undefined;
      previousKey = element;
    } else if (length >= 3 && length <=8 && previousKey !== undefined) {
      extensionMap[previousKey] = element;
      previousKey = undefined;
    } else {
      return {};
    }
  }
  return extensionMap;
}
function toObject(value) {
  if (value === undefined || value === null) {
    throw new TypeError('Value cannot be converted to an Object.');
  }
  return Object(value);
}
function setOptions(inOptions, extensionMap, keyValues, getOption, outOptions) {
  var extension = '';
  function updateExtension(key, value) {
    return ['-', key, '-', String(value)].join('');
  }
  function updateProperty(property, type, value) {
    if (type === 'boolean' && (typeof value === 'string')) {
      value = (value === 'true') ? true : false;
    }
    if (property !== undefined) {
      defineWEProperty(outOptions, property, value);
    }
  }
  for (var key in keyValues) {
    if (keyValues.hasOwnProperty(key)) {
      var value = undefined;
      var map = keyValues[key];
      if (map.property !== undefined) {
        value = getOption(map.property, map.type, map.values);
      }
      if (value !== undefined) {
        updateProperty(map.property, map.type, value);
        extension += updateExtension(key, value);
        continue;
      }
      if (extensionMap.hasOwnProperty(key)) {
        value = extensionMap[key];
        if (value !== undefined) {
          updateProperty(map.property, map.type, value);
          extension += updateExtension(key, value);
        } else if (map.type === 'boolean') {
          updateProperty(map.property, map.type, true);
          extension += updateExtension(key, true);
        }
      }
    }
  }
  return extension === ''? '' : '-u' + extension;
}
function freezeArray(array) {
  array.forEach(function(element, index) {
    Object.defineProperty(array, index, {value: element,
	                                 configurable: false,
		                         writable: false,
                                         enumerable: true});
  });
  Object.defineProperty(array, 'length', {value: array.length,
                                          writable: false});
  return array;
}
function getOptimalLanguageTag(original, resolved) {
  native function NativeJSGetLanguageTagVariants();
  if (original === resolved) {
    return original;
  }
  var locales = NativeJSGetLanguageTagVariants([original, resolved]);
  if (locales[0].maximized !== locales[1].maximized) {
    return resolved;
  }
  var resolvedBase = new RegExp('^' + locales[1].base);
  return resolved.replace(resolvedBase, locales[0].base);
}
function getAvailableLocalesOf(service) {
  native function NativeJSAvailableLocalesOf();
  var available = NativeJSAvailableLocalesOf(service);
  for (var i in available) {
    if (available.hasOwnProperty(i)) {
      var parts = i.match(/^([a-z]{2,3})-([A-Z][a-z]{3})-([A-Z]{2})$/);
      if (parts !== null) {
	available[parts[1] + '-' + parts[3]] = null;
      }
    }
  }
  return available;
}
function defineWEProperty(object, property, value) {
  Object.defineProperty(object, property,
                        {value: value, writable: true, enumerable: true});
}
function addWEPropertyIfDefined(object, property, value) {
  if (value !== undefined) {
    defineWEProperty(object, property, value);
  }
}
function defineWECProperty(object, property, value) {
  Object.defineProperty(object, property,
                        {value: value,
                         writable: true,
                         enumerable: true,
                         configurable: true});
}
function addWECPropertyIfDefined(object, property, value) {
  if (value !== undefined) {
    defineWECProperty(object, property, value);
  }
}

var collator = Intl.Collator;
var numberFormat = Intl.NumberFormat;
var dateFormat = Intl.DateTimeFormat;
Object.defineProperty(String.prototype, 'localeCompare', {
  value: function(that, locales, options) {
    return compare(new collator(locales, options), this, that);
  },
  writable: true,
  configurable: true,
  enumerable: false
});
Object.defineProperty(Number.prototype, 'toLocaleString', {
  value: function(locales, options) {
    return formatNumber(new numberFormat(locales, options), this);
  },
  writable: true,
  configurable: true,
  enumerable: false
});
function toLocaleDateTime(date, locales, options, required, defaults) {
  if (!(date instanceof Date)) {
    throw new TypeError('Method invoked on an object that is not Date.');
  }
  if (isNaN(date)) {
    return 'Invalid Date';
  }
  var internalOptions = toDateTimeOptions(options, required, defaults);
  return formatDate(new dateFormat(locales, internalOptions), date);
}
Object.defineProperty(Date.prototype, 'toLocaleString', {
  value: function(locales, options) {
    return toLocaleDateTime(this, locales, options, 'any', 'all');
  },
  writable: true,
  configurable: true,
  enumerable: false
});
Object.defineProperty(Date.prototype, 'toLocaleDateString', {
  value: function(locales, options) {
    return toLocaleDateTime(this, locales, options, 'date', 'date');
  },
  writable: true,
  configurable: true,
  enumerable: false
});
Object.defineProperty(Date.prototype, 'toLocaleTimeString', {
  value: function(locales, options) {
    return toLocaleDateTime(this, locales, options, 'time', 'time');
  },
  writable: true,
  configurable: true,
  enumerable: false
});

var CLEANUP_RE = new RegExp('');
CLEANUP_RE.test('');
return Intl;
}());
var v8Intl = Intl;
