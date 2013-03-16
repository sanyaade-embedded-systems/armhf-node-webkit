// This is generated file. Do not modify directly.

#include "third_party/ffmpeg/ffmpeg_stubs.h"

#include <stdlib.h>  // For NULL.
#include <dlfcn.h>   // For dysym, dlopen.

#include <map>
#include <vector>

// These are some extra includes needed in the generated stub file for defining
// various FFmpeg types.

extern "C" {

#include <libavcodec/avcodec.h>
#include <libavcodec/avfft.h>
#include <libavformat/avformat.h>

typedef int (*AVLockMgrOperation)(void**, enum AVLockOp);
typedef int (*AVIOReadWriteOperation)(void*, uint8_t*, int);
typedef int64_t (*AVIOSeekOperation)(void*, int64_t, int);

}

extern "C" {

// Static pointers that will hold the location of the real function
// implementations after the module has been loaded.
static AVCodecContext * (*avcodec_alloc_context3_ptr)(const AVCodec *codec) = NULL;
static AVCodec * (*avcodec_find_decoder_ptr)(enum CodecID id) = NULL;
static AVFrame * (*avcodec_alloc_frame_ptr)(void) = NULL;
static int (*av_new_packet_ptr)(AVPacket *pkt, int size) = NULL;
static int (*avcodec_decode_audio4_ptr)(AVCodecContext *avctx, AVFrame *frame, int *got_frame_ptr, const AVPacket *avpkt) = NULL;
static int (*avcodec_decode_video2_ptr)(AVCodecContext *avctx, AVFrame *picture, int *got_picture_ptr, const AVPacket *avpkt) = NULL;
static int (*avcodec_open2_ptr)(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options) = NULL;
static int (*avcodec_close_ptr)(AVCodecContext *avctx) = NULL;
static void (*av_free_packet_ptr)(AVPacket *pkt) = NULL;
static void (*av_init_packet_ptr)(AVPacket *pkt) = NULL;
static int (*av_dup_packet_ptr)(AVPacket *pkt) = NULL;
static void (*avcodec_flush_buffers_ptr)(AVCodecContext *avctx) = NULL;
static void (*av_register_bitstream_filter_ptr)(AVBitStreamFilter *bsf) = NULL;
static AVBitStreamFilterContext * (*av_bitstream_filter_init_ptr)(const char *name) = NULL;
static int (*av_bitstream_filter_filter_ptr)(AVBitStreamFilterContext *bsfc, AVCodecContext *avctx, const char *args, uint8_t **poutbuf, int *poutbuf_size, const uint8_t *buf, int buf_size, int keyframe) = NULL;
static void (*av_bitstream_filter_close_ptr)(AVBitStreamFilterContext *bsf) = NULL;
static void (*av_destruct_packet_ptr)(AVPacket *pkt) = NULL;
static int (*av_lockmgr_register_ptr)(AVLockMgrOperation cb) = NULL;
static void (*avcodec_get_frame_defaults_ptr)(AVFrame *pic) = NULL;
static void (*avcodec_align_dimensions_ptr)(AVCodecContext *s, int *width, int *height) = NULL;
static RDFTContext * (*av_rdft_init_ptr)(int nbits, enum RDFTransformType trans) = NULL;
static void (*av_rdft_calc_ptr)(RDFTContext *s, FFTSample *data) = NULL;
static void (*av_rdft_end_ptr)(RDFTContext *s) = NULL;
static void (*avformat_close_input_ptr)(AVFormatContext **s) = NULL;
static int (*avformat_find_stream_info_ptr)(AVFormatContext *ic, AVDictionary **options) = NULL;
static int (*av_index_search_timestamp_ptr)(AVStream *st, int64_t wanted_timestamp, int flags) = NULL;
static int (*avformat_open_input_ptr)(AVFormatContext **ps, const char *filename, AVInputFormat *fmt, AVDictionary **options) = NULL;
static int (*av_read_frame_ptr)(AVFormatContext *s, AVPacket *pkt) = NULL;
static void (*av_register_all_ptr)(void) = NULL;
static int (*av_seek_frame_ptr)(AVFormatContext *s, int stream_index, int64_t timestamp, int flags) = NULL;
static AVFormatContext * (*avformat_alloc_context_ptr)(void) = NULL;
static void (*avformat_free_context_ptr)(AVFormatContext *s) = NULL;
static AVIOContext * (*avio_alloc_context_ptr)(unsigned char *buffer, int buffer_size, int write_flag, void *opaque, AVIOReadWriteOperation read_packet, AVIOReadWriteOperation write_packet, AVIOSeekOperation seek) = NULL;
static int (*avio_close_ptr)(AVIOContext *s) = NULL;
static int (*av_get_bytes_per_sample_ptr)(enum AVSampleFormat sample_fmt) = NULL;
static int64_t (*av_rescale_q_ptr)(int64_t a, AVRational bq, AVRational cq) = NULL;
static void * (*av_malloc_ptr)(size_t size) = NULL;
static void (*av_free_ptr)(void *ptr) = NULL;
static void (*av_log_set_level_ptr)(int level) = NULL;
static int (*av_dict_set_ptr)(AVDictionary **pm, const char *key, const char *value, int flags) = NULL;
static AVDictionaryEntry * (*av_dict_get_ptr)(AVDictionary *m, const char *key, const AVDictionaryEntry *prev, int flags) = NULL;
static int (*av_samples_get_buffer_size_ptr)(int *linesize, int nb_channels, int nb_samples, enum AVSampleFormat sample_fmt, int align) = NULL;
static int (*av_image_check_size_ptr)(unsigned int w, unsigned int h, int log_offset, void *log_ctx) = NULL;
static int (*av_image_fill_linesizes_ptr)(int *linesizes, enum PixelFormat pix_fmt, int width) = NULL;

// Stubs that dispatch to the real implementations.
extern AVCodecContext * avcodec_alloc_context3(const AVCodec *codec) __attribute__((weak));
AVCodecContext * avcodec_alloc_context3(const AVCodec *codec) {
  return avcodec_alloc_context3_ptr(codec);
}
extern AVCodec * avcodec_find_decoder(enum CodecID id) __attribute__((weak));
AVCodec * avcodec_find_decoder(enum CodecID id) {
  return avcodec_find_decoder_ptr(id);
}
extern AVFrame * avcodec_alloc_frame(void) __attribute__((weak));
AVFrame * avcodec_alloc_frame(void) {
  return avcodec_alloc_frame_ptr();
}
extern int av_new_packet(AVPacket *pkt, int size) __attribute__((weak));
int av_new_packet(AVPacket *pkt, int size) {
  return av_new_packet_ptr(pkt, size);
}
extern int avcodec_decode_audio4(AVCodecContext *avctx, AVFrame *frame, int *got_frame_ptr, const AVPacket *avpkt) __attribute__((weak));
int avcodec_decode_audio4(AVCodecContext *avctx, AVFrame *frame, int *got_frame_ptr, const AVPacket *avpkt) {
  return avcodec_decode_audio4_ptr(avctx, frame, got_frame_ptr, avpkt);
}
extern int avcodec_decode_video2(AVCodecContext *avctx, AVFrame *picture, int *got_picture_ptr, const AVPacket *avpkt) __attribute__((weak));
int avcodec_decode_video2(AVCodecContext *avctx, AVFrame *picture, int *got_picture_ptr, const AVPacket *avpkt) {
  return avcodec_decode_video2_ptr(avctx, picture, got_picture_ptr, avpkt);
}
extern int avcodec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options) __attribute__((weak));
int avcodec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options) {
  return avcodec_open2_ptr(avctx, codec, options);
}
extern int avcodec_close(AVCodecContext *avctx) __attribute__((weak));
int avcodec_close(AVCodecContext *avctx) {
  return avcodec_close_ptr(avctx);
}
extern void av_free_packet(AVPacket *pkt) __attribute__((weak));
void av_free_packet(AVPacket *pkt) {
  av_free_packet_ptr(pkt);
}
extern void av_init_packet(AVPacket *pkt) __attribute__((weak));
void av_init_packet(AVPacket *pkt) {
  av_init_packet_ptr(pkt);
}
extern int av_dup_packet(AVPacket *pkt) __attribute__((weak));
int av_dup_packet(AVPacket *pkt) {
  return av_dup_packet_ptr(pkt);
}
extern void avcodec_flush_buffers(AVCodecContext *avctx) __attribute__((weak));
void avcodec_flush_buffers(AVCodecContext *avctx) {
  avcodec_flush_buffers_ptr(avctx);
}
extern void av_register_bitstream_filter(AVBitStreamFilter *bsf) __attribute__((weak));
void av_register_bitstream_filter(AVBitStreamFilter *bsf) {
  av_register_bitstream_filter_ptr(bsf);
}
extern AVBitStreamFilterContext * av_bitstream_filter_init(const char *name) __attribute__((weak));
AVBitStreamFilterContext * av_bitstream_filter_init(const char *name) {
  return av_bitstream_filter_init_ptr(name);
}
extern int av_bitstream_filter_filter(AVBitStreamFilterContext *bsfc, AVCodecContext *avctx, const char *args, uint8_t **poutbuf, int *poutbuf_size, const uint8_t *buf, int buf_size, int keyframe) __attribute__((weak));
int av_bitstream_filter_filter(AVBitStreamFilterContext *bsfc, AVCodecContext *avctx, const char *args, uint8_t **poutbuf, int *poutbuf_size, const uint8_t *buf, int buf_size, int keyframe) {
  return av_bitstream_filter_filter_ptr(bsfc, avctx, args, poutbuf, poutbuf_size, buf, buf_size, keyframe);
}
extern void av_bitstream_filter_close(AVBitStreamFilterContext *bsf) __attribute__((weak));
void av_bitstream_filter_close(AVBitStreamFilterContext *bsf) {
  av_bitstream_filter_close_ptr(bsf);
}
extern void av_destruct_packet(AVPacket *pkt) __attribute__((weak));
void av_destruct_packet(AVPacket *pkt) {
  av_destruct_packet_ptr(pkt);
}
extern int av_lockmgr_register(AVLockMgrOperation cb) __attribute__((weak));
int av_lockmgr_register(AVLockMgrOperation cb) {
  return av_lockmgr_register_ptr(cb);
}
extern void avcodec_get_frame_defaults(AVFrame *pic) __attribute__((weak));
void avcodec_get_frame_defaults(AVFrame *pic) {
  avcodec_get_frame_defaults_ptr(pic);
}
extern void avcodec_align_dimensions(AVCodecContext *s, int *width, int *height) __attribute__((weak));
void avcodec_align_dimensions(AVCodecContext *s, int *width, int *height) {
  avcodec_align_dimensions_ptr(s, width, height);
}
extern RDFTContext * av_rdft_init(int nbits, enum RDFTransformType trans) __attribute__((weak));
RDFTContext * av_rdft_init(int nbits, enum RDFTransformType trans) {
  return av_rdft_init_ptr(nbits, trans);
}
extern void av_rdft_calc(RDFTContext *s, FFTSample *data) __attribute__((weak));
void av_rdft_calc(RDFTContext *s, FFTSample *data) {
  av_rdft_calc_ptr(s, data);
}
extern void av_rdft_end(RDFTContext *s) __attribute__((weak));
void av_rdft_end(RDFTContext *s) {
  av_rdft_end_ptr(s);
}
extern void avformat_close_input(AVFormatContext **s) __attribute__((weak));
void avformat_close_input(AVFormatContext **s) {
  avformat_close_input_ptr(s);
}
extern int avformat_find_stream_info(AVFormatContext *ic, AVDictionary **options) __attribute__((weak));
int avformat_find_stream_info(AVFormatContext *ic, AVDictionary **options) {
  return avformat_find_stream_info_ptr(ic, options);
}
extern int av_index_search_timestamp(AVStream *st, int64_t wanted_timestamp, int flags) __attribute__((weak));
int av_index_search_timestamp(AVStream *st, int64_t wanted_timestamp, int flags) {
  return av_index_search_timestamp_ptr(st, wanted_timestamp, flags);
}
extern int avformat_open_input(AVFormatContext **ps, const char *filename, AVInputFormat *fmt, AVDictionary **options) __attribute__((weak));
int avformat_open_input(AVFormatContext **ps, const char *filename, AVInputFormat *fmt, AVDictionary **options) {
  return avformat_open_input_ptr(ps, filename, fmt, options);
}
extern int av_read_frame(AVFormatContext *s, AVPacket *pkt) __attribute__((weak));
int av_read_frame(AVFormatContext *s, AVPacket *pkt) {
  return av_read_frame_ptr(s, pkt);
}
extern void av_register_all(void) __attribute__((weak));
void av_register_all(void) {
  av_register_all_ptr();
}
extern int av_seek_frame(AVFormatContext *s, int stream_index, int64_t timestamp, int flags) __attribute__((weak));
int av_seek_frame(AVFormatContext *s, int stream_index, int64_t timestamp, int flags) {
  return av_seek_frame_ptr(s, stream_index, timestamp, flags);
}
extern AVFormatContext * avformat_alloc_context(void) __attribute__((weak));
AVFormatContext * avformat_alloc_context(void) {
  return avformat_alloc_context_ptr();
}
extern void avformat_free_context(AVFormatContext *s) __attribute__((weak));
void avformat_free_context(AVFormatContext *s) {
  avformat_free_context_ptr(s);
}
extern AVIOContext * avio_alloc_context(unsigned char *buffer, int buffer_size, int write_flag, void *opaque, AVIOReadWriteOperation read_packet, AVIOReadWriteOperation write_packet, AVIOSeekOperation seek) __attribute__((weak));
AVIOContext * avio_alloc_context(unsigned char *buffer, int buffer_size, int write_flag, void *opaque, AVIOReadWriteOperation read_packet, AVIOReadWriteOperation write_packet, AVIOSeekOperation seek) {
  return avio_alloc_context_ptr(buffer, buffer_size, write_flag, opaque, read_packet, write_packet, seek);
}
extern int avio_close(AVIOContext *s) __attribute__((weak));
int avio_close(AVIOContext *s) {
  return avio_close_ptr(s);
}
extern int av_get_bytes_per_sample(enum AVSampleFormat sample_fmt) __attribute__((weak));
int av_get_bytes_per_sample(enum AVSampleFormat sample_fmt) {
  return av_get_bytes_per_sample_ptr(sample_fmt);
}
extern int64_t av_rescale_q(int64_t a, AVRational bq, AVRational cq) __attribute__((weak));
int64_t av_rescale_q(int64_t a, AVRational bq, AVRational cq) {
  return av_rescale_q_ptr(a, bq, cq);
}
extern void * av_malloc(size_t size) __attribute__((weak));
void * av_malloc(size_t size) {
  return av_malloc_ptr(size);
}
extern void av_free(void *ptr) __attribute__((weak));
void av_free(void *ptr) {
  av_free_ptr(ptr);
}
extern void av_log_set_level(int level) __attribute__((weak));
void av_log_set_level(int level) {
  av_log_set_level_ptr(level);
}
extern int av_dict_set(AVDictionary **pm, const char *key, const char *value, int flags) __attribute__((weak));
int av_dict_set(AVDictionary **pm, const char *key, const char *value, int flags) {
  return av_dict_set_ptr(pm, key, value, flags);
}
extern AVDictionaryEntry * av_dict_get(AVDictionary *m, const char *key, const AVDictionaryEntry *prev, int flags) __attribute__((weak));
AVDictionaryEntry * av_dict_get(AVDictionary *m, const char *key, const AVDictionaryEntry *prev, int flags) {
  return av_dict_get_ptr(m, key, prev, flags);
}
extern int av_samples_get_buffer_size(int *linesize, int nb_channels, int nb_samples, enum AVSampleFormat sample_fmt, int align) __attribute__((weak));
int av_samples_get_buffer_size(int *linesize, int nb_channels, int nb_samples, enum AVSampleFormat sample_fmt, int align) {
  return av_samples_get_buffer_size_ptr(linesize, nb_channels, nb_samples, sample_fmt, align);
}
extern int av_image_check_size(unsigned int w, unsigned int h, int log_offset, void *log_ctx) __attribute__((weak));
int av_image_check_size(unsigned int w, unsigned int h, int log_offset, void *log_ctx) {
  return av_image_check_size_ptr(w, h, log_offset, log_ctx);
}
extern int av_image_fill_linesizes(int *linesizes, enum PixelFormat pix_fmt, int width) __attribute__((weak));
int av_image_fill_linesizes(int *linesizes, enum PixelFormat pix_fmt, int width) {
  return av_image_fill_linesizes_ptr(linesizes, pix_fmt, width);
}

}  // extern "C"


namespace third_party_ffmpeg {

// Returns true if all stubs have been properly initialized.
bool IsFfmpegsumoInitialized() {
  if (avcodec_alloc_context3_ptr &&
      avcodec_find_decoder_ptr &&
      avcodec_alloc_frame_ptr &&
      av_new_packet_ptr &&
      avcodec_decode_audio4_ptr &&
      avcodec_decode_video2_ptr &&
      avcodec_open2_ptr &&
      avcodec_close_ptr &&
      av_free_packet_ptr &&
      av_init_packet_ptr &&
      av_dup_packet_ptr &&
      avcodec_flush_buffers_ptr &&
      av_register_bitstream_filter_ptr &&
      av_bitstream_filter_init_ptr &&
      av_bitstream_filter_filter_ptr &&
      av_bitstream_filter_close_ptr &&
      av_destruct_packet_ptr &&
      av_lockmgr_register_ptr &&
      avcodec_get_frame_defaults_ptr &&
      avcodec_align_dimensions_ptr &&
      av_rdft_init_ptr &&
      av_rdft_calc_ptr &&
      av_rdft_end_ptr &&
      avformat_close_input_ptr &&
      avformat_find_stream_info_ptr &&
      av_index_search_timestamp_ptr &&
      avformat_open_input_ptr &&
      av_read_frame_ptr &&
      av_register_all_ptr &&
      av_seek_frame_ptr &&
      avformat_alloc_context_ptr &&
      avformat_free_context_ptr &&
      avio_alloc_context_ptr &&
      avio_close_ptr &&
      av_get_bytes_per_sample_ptr &&
      av_rescale_q_ptr &&
      av_malloc_ptr &&
      av_free_ptr &&
      av_log_set_level_ptr &&
      av_dict_set_ptr &&
      av_dict_get_ptr &&
      av_samples_get_buffer_size_ptr &&
      av_image_check_size_ptr &&
      av_image_fill_linesizes_ptr) {
    return true;
  } else {
    return false;
  }
}

// Initializes the module stubs.
void InitializeFfmpegsumo(void* module) {
  avcodec_alloc_context3_ptr =
    reinterpret_cast<AVCodecContext * (*)(const AVCodec *codec)>(
      dlsym(module, "avcodec_alloc_context3"));
    VLOG_IF(1, !avcodec_alloc_context3_ptr) << "Couldn't load avcodec_alloc_context3, dlerror() says:\n"
        << dlerror();
  avcodec_find_decoder_ptr =
    reinterpret_cast<AVCodec * (*)(enum CodecID id)>(
      dlsym(module, "avcodec_find_decoder"));
    VLOG_IF(1, !avcodec_find_decoder_ptr) << "Couldn't load avcodec_find_decoder, dlerror() says:\n"
        << dlerror();
  avcodec_alloc_frame_ptr =
    reinterpret_cast<AVFrame * (*)(void)>(
      dlsym(module, "avcodec_alloc_frame"));
    VLOG_IF(1, !avcodec_alloc_frame_ptr) << "Couldn't load avcodec_alloc_frame, dlerror() says:\n"
        << dlerror();
  av_new_packet_ptr =
    reinterpret_cast<int (*)(AVPacket *pkt, int size)>(
      dlsym(module, "av_new_packet"));
    VLOG_IF(1, !av_new_packet_ptr) << "Couldn't load av_new_packet, dlerror() says:\n"
        << dlerror();
  avcodec_decode_audio4_ptr =
    reinterpret_cast<int (*)(AVCodecContext *avctx, AVFrame *frame, int *got_frame_ptr, const AVPacket *avpkt)>(
      dlsym(module, "avcodec_decode_audio4"));
    VLOG_IF(1, !avcodec_decode_audio4_ptr) << "Couldn't load avcodec_decode_audio4, dlerror() says:\n"
        << dlerror();
  avcodec_decode_video2_ptr =
    reinterpret_cast<int (*)(AVCodecContext *avctx, AVFrame *picture, int *got_picture_ptr, const AVPacket *avpkt)>(
      dlsym(module, "avcodec_decode_video2"));
    VLOG_IF(1, !avcodec_decode_video2_ptr) << "Couldn't load avcodec_decode_video2, dlerror() says:\n"
        << dlerror();
  avcodec_open2_ptr =
    reinterpret_cast<int (*)(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options)>(
      dlsym(module, "avcodec_open2"));
    VLOG_IF(1, !avcodec_open2_ptr) << "Couldn't load avcodec_open2, dlerror() says:\n"
        << dlerror();
  avcodec_close_ptr =
    reinterpret_cast<int (*)(AVCodecContext *avctx)>(
      dlsym(module, "avcodec_close"));
    VLOG_IF(1, !avcodec_close_ptr) << "Couldn't load avcodec_close, dlerror() says:\n"
        << dlerror();
  av_free_packet_ptr =
    reinterpret_cast<void (*)(AVPacket *pkt)>(
      dlsym(module, "av_free_packet"));
    VLOG_IF(1, !av_free_packet_ptr) << "Couldn't load av_free_packet, dlerror() says:\n"
        << dlerror();
  av_init_packet_ptr =
    reinterpret_cast<void (*)(AVPacket *pkt)>(
      dlsym(module, "av_init_packet"));
    VLOG_IF(1, !av_init_packet_ptr) << "Couldn't load av_init_packet, dlerror() says:\n"
        << dlerror();
  av_dup_packet_ptr =
    reinterpret_cast<int (*)(AVPacket *pkt)>(
      dlsym(module, "av_dup_packet"));
    VLOG_IF(1, !av_dup_packet_ptr) << "Couldn't load av_dup_packet, dlerror() says:\n"
        << dlerror();
  avcodec_flush_buffers_ptr =
    reinterpret_cast<void (*)(AVCodecContext *avctx)>(
      dlsym(module, "avcodec_flush_buffers"));
    VLOG_IF(1, !avcodec_flush_buffers_ptr) << "Couldn't load avcodec_flush_buffers, dlerror() says:\n"
        << dlerror();
  av_register_bitstream_filter_ptr =
    reinterpret_cast<void (*)(AVBitStreamFilter *bsf)>(
      dlsym(module, "av_register_bitstream_filter"));
    VLOG_IF(1, !av_register_bitstream_filter_ptr) << "Couldn't load av_register_bitstream_filter, dlerror() says:\n"
        << dlerror();
  av_bitstream_filter_init_ptr =
    reinterpret_cast<AVBitStreamFilterContext * (*)(const char *name)>(
      dlsym(module, "av_bitstream_filter_init"));
    VLOG_IF(1, !av_bitstream_filter_init_ptr) << "Couldn't load av_bitstream_filter_init, dlerror() says:\n"
        << dlerror();
  av_bitstream_filter_filter_ptr =
    reinterpret_cast<int (*)(AVBitStreamFilterContext *bsfc, AVCodecContext *avctx, const char *args, uint8_t **poutbuf, int *poutbuf_size, const uint8_t *buf, int buf_size, int keyframe)>(
      dlsym(module, "av_bitstream_filter_filter"));
    VLOG_IF(1, !av_bitstream_filter_filter_ptr) << "Couldn't load av_bitstream_filter_filter, dlerror() says:\n"
        << dlerror();
  av_bitstream_filter_close_ptr =
    reinterpret_cast<void (*)(AVBitStreamFilterContext *bsf)>(
      dlsym(module, "av_bitstream_filter_close"));
    VLOG_IF(1, !av_bitstream_filter_close_ptr) << "Couldn't load av_bitstream_filter_close, dlerror() says:\n"
        << dlerror();
  av_destruct_packet_ptr =
    reinterpret_cast<void (*)(AVPacket *pkt)>(
      dlsym(module, "av_destruct_packet"));
    VLOG_IF(1, !av_destruct_packet_ptr) << "Couldn't load av_destruct_packet, dlerror() says:\n"
        << dlerror();
  av_lockmgr_register_ptr =
    reinterpret_cast<int (*)(AVLockMgrOperation cb)>(
      dlsym(module, "av_lockmgr_register"));
    VLOG_IF(1, !av_lockmgr_register_ptr) << "Couldn't load av_lockmgr_register, dlerror() says:\n"
        << dlerror();
  avcodec_get_frame_defaults_ptr =
    reinterpret_cast<void (*)(AVFrame *pic)>(
      dlsym(module, "avcodec_get_frame_defaults"));
    VLOG_IF(1, !avcodec_get_frame_defaults_ptr) << "Couldn't load avcodec_get_frame_defaults, dlerror() says:\n"
        << dlerror();
  avcodec_align_dimensions_ptr =
    reinterpret_cast<void (*)(AVCodecContext *s, int *width, int *height)>(
      dlsym(module, "avcodec_align_dimensions"));
    VLOG_IF(1, !avcodec_align_dimensions_ptr) << "Couldn't load avcodec_align_dimensions, dlerror() says:\n"
        << dlerror();
  av_rdft_init_ptr =
    reinterpret_cast<RDFTContext * (*)(int nbits, enum RDFTransformType trans)>(
      dlsym(module, "av_rdft_init"));
    VLOG_IF(1, !av_rdft_init_ptr) << "Couldn't load av_rdft_init, dlerror() says:\n"
        << dlerror();
  av_rdft_calc_ptr =
    reinterpret_cast<void (*)(RDFTContext *s, FFTSample *data)>(
      dlsym(module, "av_rdft_calc"));
    VLOG_IF(1, !av_rdft_calc_ptr) << "Couldn't load av_rdft_calc, dlerror() says:\n"
        << dlerror();
  av_rdft_end_ptr =
    reinterpret_cast<void (*)(RDFTContext *s)>(
      dlsym(module, "av_rdft_end"));
    VLOG_IF(1, !av_rdft_end_ptr) << "Couldn't load av_rdft_end, dlerror() says:\n"
        << dlerror();
  avformat_close_input_ptr =
    reinterpret_cast<void (*)(AVFormatContext **s)>(
      dlsym(module, "avformat_close_input"));
    VLOG_IF(1, !avformat_close_input_ptr) << "Couldn't load avformat_close_input, dlerror() says:\n"
        << dlerror();
  avformat_find_stream_info_ptr =
    reinterpret_cast<int (*)(AVFormatContext *ic, AVDictionary **options)>(
      dlsym(module, "avformat_find_stream_info"));
    VLOG_IF(1, !avformat_find_stream_info_ptr) << "Couldn't load avformat_find_stream_info, dlerror() says:\n"
        << dlerror();
  av_index_search_timestamp_ptr =
    reinterpret_cast<int (*)(AVStream *st, int64_t wanted_timestamp, int flags)>(
      dlsym(module, "av_index_search_timestamp"));
    VLOG_IF(1, !av_index_search_timestamp_ptr) << "Couldn't load av_index_search_timestamp, dlerror() says:\n"
        << dlerror();
  avformat_open_input_ptr =
    reinterpret_cast<int (*)(AVFormatContext **ps, const char *filename, AVInputFormat *fmt, AVDictionary **options)>(
      dlsym(module, "avformat_open_input"));
    VLOG_IF(1, !avformat_open_input_ptr) << "Couldn't load avformat_open_input, dlerror() says:\n"
        << dlerror();
  av_read_frame_ptr =
    reinterpret_cast<int (*)(AVFormatContext *s, AVPacket *pkt)>(
      dlsym(module, "av_read_frame"));
    VLOG_IF(1, !av_read_frame_ptr) << "Couldn't load av_read_frame, dlerror() says:\n"
        << dlerror();
  av_register_all_ptr =
    reinterpret_cast<void (*)(void)>(
      dlsym(module, "av_register_all"));
    VLOG_IF(1, !av_register_all_ptr) << "Couldn't load av_register_all, dlerror() says:\n"
        << dlerror();
  av_seek_frame_ptr =
    reinterpret_cast<int (*)(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)>(
      dlsym(module, "av_seek_frame"));
    VLOG_IF(1, !av_seek_frame_ptr) << "Couldn't load av_seek_frame, dlerror() says:\n"
        << dlerror();
  avformat_alloc_context_ptr =
    reinterpret_cast<AVFormatContext * (*)(void)>(
      dlsym(module, "avformat_alloc_context"));
    VLOG_IF(1, !avformat_alloc_context_ptr) << "Couldn't load avformat_alloc_context, dlerror() says:\n"
        << dlerror();
  avformat_free_context_ptr =
    reinterpret_cast<void (*)(AVFormatContext *s)>(
      dlsym(module, "avformat_free_context"));
    VLOG_IF(1, !avformat_free_context_ptr) << "Couldn't load avformat_free_context, dlerror() says:\n"
        << dlerror();
  avio_alloc_context_ptr =
    reinterpret_cast<AVIOContext * (*)(unsigned char *buffer, int buffer_size, int write_flag, void *opaque, AVIOReadWriteOperation read_packet, AVIOReadWriteOperation write_packet, AVIOSeekOperation seek)>(
      dlsym(module, "avio_alloc_context"));
    VLOG_IF(1, !avio_alloc_context_ptr) << "Couldn't load avio_alloc_context, dlerror() says:\n"
        << dlerror();
  avio_close_ptr =
    reinterpret_cast<int (*)(AVIOContext *s)>(
      dlsym(module, "avio_close"));
    VLOG_IF(1, !avio_close_ptr) << "Couldn't load avio_close, dlerror() says:\n"
        << dlerror();
  av_get_bytes_per_sample_ptr =
    reinterpret_cast<int (*)(enum AVSampleFormat sample_fmt)>(
      dlsym(module, "av_get_bytes_per_sample"));
    VLOG_IF(1, !av_get_bytes_per_sample_ptr) << "Couldn't load av_get_bytes_per_sample, dlerror() says:\n"
        << dlerror();
  av_rescale_q_ptr =
    reinterpret_cast<int64_t (*)(int64_t a, AVRational bq, AVRational cq)>(
      dlsym(module, "av_rescale_q"));
    VLOG_IF(1, !av_rescale_q_ptr) << "Couldn't load av_rescale_q, dlerror() says:\n"
        << dlerror();
  av_malloc_ptr =
    reinterpret_cast<void * (*)(size_t size)>(
      dlsym(module, "av_malloc"));
    VLOG_IF(1, !av_malloc_ptr) << "Couldn't load av_malloc, dlerror() says:\n"
        << dlerror();
  av_free_ptr =
    reinterpret_cast<void (*)(void *ptr)>(
      dlsym(module, "av_free"));
    VLOG_IF(1, !av_free_ptr) << "Couldn't load av_free, dlerror() says:\n"
        << dlerror();
  av_log_set_level_ptr =
    reinterpret_cast<void (*)(int level)>(
      dlsym(module, "av_log_set_level"));
    VLOG_IF(1, !av_log_set_level_ptr) << "Couldn't load av_log_set_level, dlerror() says:\n"
        << dlerror();
  av_dict_set_ptr =
    reinterpret_cast<int (*)(AVDictionary **pm, const char *key, const char *value, int flags)>(
      dlsym(module, "av_dict_set"));
    VLOG_IF(1, !av_dict_set_ptr) << "Couldn't load av_dict_set, dlerror() says:\n"
        << dlerror();
  av_dict_get_ptr =
    reinterpret_cast<AVDictionaryEntry * (*)(AVDictionary *m, const char *key, const AVDictionaryEntry *prev, int flags)>(
      dlsym(module, "av_dict_get"));
    VLOG_IF(1, !av_dict_get_ptr) << "Couldn't load av_dict_get, dlerror() says:\n"
        << dlerror();
  av_samples_get_buffer_size_ptr =
    reinterpret_cast<int (*)(int *linesize, int nb_channels, int nb_samples, enum AVSampleFormat sample_fmt, int align)>(
      dlsym(module, "av_samples_get_buffer_size"));
    VLOG_IF(1, !av_samples_get_buffer_size_ptr) << "Couldn't load av_samples_get_buffer_size, dlerror() says:\n"
        << dlerror();
  av_image_check_size_ptr =
    reinterpret_cast<int (*)(unsigned int w, unsigned int h, int log_offset, void *log_ctx)>(
      dlsym(module, "av_image_check_size"));
    VLOG_IF(1, !av_image_check_size_ptr) << "Couldn't load av_image_check_size, dlerror() says:\n"
        << dlerror();
  av_image_fill_linesizes_ptr =
    reinterpret_cast<int (*)(int *linesizes, enum PixelFormat pix_fmt, int width)>(
      dlsym(module, "av_image_fill_linesizes"));
    VLOG_IF(1, !av_image_fill_linesizes_ptr) << "Couldn't load av_image_fill_linesizes, dlerror() says:\n"
        << dlerror();
}

// Uninitialize the module stubs.  Reset pointers to NULL.
void UninitializeFfmpegsumo() {
  avcodec_alloc_context3_ptr = NULL;
  avcodec_find_decoder_ptr = NULL;
  avcodec_alloc_frame_ptr = NULL;
  av_new_packet_ptr = NULL;
  avcodec_decode_audio4_ptr = NULL;
  avcodec_decode_video2_ptr = NULL;
  avcodec_open2_ptr = NULL;
  avcodec_close_ptr = NULL;
  av_free_packet_ptr = NULL;
  av_init_packet_ptr = NULL;
  av_dup_packet_ptr = NULL;
  avcodec_flush_buffers_ptr = NULL;
  av_register_bitstream_filter_ptr = NULL;
  av_bitstream_filter_init_ptr = NULL;
  av_bitstream_filter_filter_ptr = NULL;
  av_bitstream_filter_close_ptr = NULL;
  av_destruct_packet_ptr = NULL;
  av_lockmgr_register_ptr = NULL;
  avcodec_get_frame_defaults_ptr = NULL;
  avcodec_align_dimensions_ptr = NULL;
  av_rdft_init_ptr = NULL;
  av_rdft_calc_ptr = NULL;
  av_rdft_end_ptr = NULL;
  avformat_close_input_ptr = NULL;
  avformat_find_stream_info_ptr = NULL;
  av_index_search_timestamp_ptr = NULL;
  avformat_open_input_ptr = NULL;
  av_read_frame_ptr = NULL;
  av_register_all_ptr = NULL;
  av_seek_frame_ptr = NULL;
  avformat_alloc_context_ptr = NULL;
  avformat_free_context_ptr = NULL;
  avio_alloc_context_ptr = NULL;
  avio_close_ptr = NULL;
  av_get_bytes_per_sample_ptr = NULL;
  av_rescale_q_ptr = NULL;
  av_malloc_ptr = NULL;
  av_free_ptr = NULL;
  av_log_set_level_ptr = NULL;
  av_dict_set_ptr = NULL;
  av_dict_get_ptr = NULL;
  av_samples_get_buffer_size_ptr = NULL;
  av_image_check_size_ptr = NULL;
  av_image_fill_linesizes_ptr = NULL;
}

}  // namespace third_party_ffmpeg

namespace third_party_ffmpeg {
typedef std::map<StubModules, void*> StubHandleMap;
static void CloseLibraries(StubHandleMap* stub_handles) {
  for (StubHandleMap::const_iterator it = stub_handles->begin();
       it != stub_handles->end();
       ++it) {
    dlclose(it->second);
  }

  stub_handles->clear();
}
bool InitializeStubs(const StubPathMap& path_map) {
  StubHandleMap opened_libraries;
  for (int i = 0; i < kNumStubModules; ++i) {
    StubModules cur_module = static_cast<StubModules>(i);
    // If a module is missing, we fail.
    StubPathMap::const_iterator it = path_map.find(cur_module);
    if (it == path_map.end()) {
      CloseLibraries(&opened_libraries);
      return false;
    }

    // Otherwise, attempt to dlopen the library.
    const std::vector<std::string>& paths = it->second;
    bool module_opened = false;
    for (std::vector<std::string>::const_iterator dso_path = paths.begin();
         !module_opened && dso_path != paths.end();
         ++dso_path) {
      void* handle = dlopen(dso_path->c_str(), RTLD_LAZY);
      if (handle != NULL) {
        module_opened = true;
        opened_libraries[cur_module] = handle;
      } else {
        VLOG(1) << "dlopen(" << dso_path->c_str() << ") failed, "
                << "dlerror() says:\n" << dlerror();
      }
    }

    if (!module_opened) {
      CloseLibraries(&opened_libraries);
      return false;
    }
  }

  // Initialize each module if we have not already failed.
  InitializeFfmpegsumo(opened_libraries[kModuleFfmpegsumo]);

  // Check that each module is initialized correctly.
  // Close all previously opened libraries on failure.
  if (!IsFfmpegsumoInitialized()) {
    UninitializeFfmpegsumo();
    CloseLibraries(&opened_libraries);
    return false;
  }

  return true;
}

}  // namespace third_party_ffmpeg
