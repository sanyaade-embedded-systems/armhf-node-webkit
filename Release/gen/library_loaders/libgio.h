// This is generated file. Do not modify directly.
// Path to the code generator: tools/generate_library_loader/generate_library_loader.py .

#ifndef LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H
#define LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H

#include "build/linux/gsettings.h"
#define LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN


#include <string>

#include "base/basictypes.h"
#include "base/compiler_specific.h"
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN)
#include "base/native_library.h"
#endif

class LibGioLoader {
 public:
  LibGioLoader();
  ~LibGioLoader();

  bool Load(const std::string& library_name) WARN_UNUSED_RESULT;

  bool loaded() const { return loaded_; }

  typeof(&::g_settings_new) g_settings_new;
  typeof(&::g_settings_get_child) g_settings_get_child;
  typeof(&::g_settings_get_string) g_settings_get_string;
  typeof(&::g_settings_get_boolean) g_settings_get_boolean;
  typeof(&::g_settings_get_int) g_settings_get_int;
  typeof(&::g_settings_get_strv) g_settings_get_strv;
  typeof(&::g_settings_list_schemas) g_settings_list_schemas;


 private:
  void CleanUp(bool unload);

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN)
  base::NativeLibrary library_;
#endif

  bool loaded_;

  DISALLOW_COPY_AND_ASSIGN(LibGioLoader);
};

#endif  // LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H
