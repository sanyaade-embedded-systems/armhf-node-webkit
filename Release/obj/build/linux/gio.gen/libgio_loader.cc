// This is generated file. Do not modify directly.
// Path to the code generator: tools/generate_library_loader/generate_library_loader.py .

#include "out/Release/gen/library_loaders/libgio.h"

// Put these sanity checks here so that they fire at most once
// (to avoid cluttering the build output).
#if !defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN) && !defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DT_NEEDED)
#error neither LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN nor LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DT_NEEDED defined
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN) && defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DT_NEEDED)
#error both LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN and LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DT_NEEDED defined
#endif

#include "base/file_path.h"
#include "base/logging.h"

LibGioLoader::LibGioLoader() : loaded_(false) {
}

LibGioLoader::~LibGioLoader() {
  CleanUp(loaded_);
}

bool LibGioLoader::Load(const std::string& library_name) {
  if (loaded_) {
    NOTREACHED();
    return false;
  }

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN)
  library_ = base::LoadNativeLibrary(FilePath(library_name), NULL);
  if (!library_)
    return false;
#endif


#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN)
  g_settings_new =
      reinterpret_cast<typeof(this->g_settings_new)>(
          base::GetFunctionPointerFromNativeLibrary(
              library_, "g_settings_new"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DT_NEEDED)
  g_settings_new = &::g_settings_new;
#endif
  if (!g_settings_new) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN)
  g_settings_get_child =
      reinterpret_cast<typeof(this->g_settings_get_child)>(
          base::GetFunctionPointerFromNativeLibrary(
              library_, "g_settings_get_child"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DT_NEEDED)
  g_settings_get_child = &::g_settings_get_child;
#endif
  if (!g_settings_get_child) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN)
  g_settings_get_string =
      reinterpret_cast<typeof(this->g_settings_get_string)>(
          base::GetFunctionPointerFromNativeLibrary(
              library_, "g_settings_get_string"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DT_NEEDED)
  g_settings_get_string = &::g_settings_get_string;
#endif
  if (!g_settings_get_string) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN)
  g_settings_get_boolean =
      reinterpret_cast<typeof(this->g_settings_get_boolean)>(
          base::GetFunctionPointerFromNativeLibrary(
              library_, "g_settings_get_boolean"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DT_NEEDED)
  g_settings_get_boolean = &::g_settings_get_boolean;
#endif
  if (!g_settings_get_boolean) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN)
  g_settings_get_int =
      reinterpret_cast<typeof(this->g_settings_get_int)>(
          base::GetFunctionPointerFromNativeLibrary(
              library_, "g_settings_get_int"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DT_NEEDED)
  g_settings_get_int = &::g_settings_get_int;
#endif
  if (!g_settings_get_int) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN)
  g_settings_get_strv =
      reinterpret_cast<typeof(this->g_settings_get_strv)>(
          base::GetFunctionPointerFromNativeLibrary(
              library_, "g_settings_get_strv"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DT_NEEDED)
  g_settings_get_strv = &::g_settings_get_strv;
#endif
  if (!g_settings_get_strv) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN)
  g_settings_list_schemas =
      reinterpret_cast<typeof(this->g_settings_list_schemas)>(
          base::GetFunctionPointerFromNativeLibrary(
              library_, "g_settings_list_schemas"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DT_NEEDED)
  g_settings_list_schemas = &::g_settings_list_schemas;
#endif
  if (!g_settings_list_schemas) {
    CleanUp(true);
    return false;
  }


  loaded_ = true;
  return true;
}

void LibGioLoader::CleanUp(bool unload) {
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBGIO_H_DLOPEN)
  if (unload) {
    base::UnloadNativeLibrary(library_);
    library_ = NULL;
  }
#endif
  loaded_ = false;
  g_settings_new = NULL;
  g_settings_get_child = NULL;
  g_settings_get_string = NULL;
  g_settings_get_boolean = NULL;
  g_settings_get_int = NULL;
  g_settings_get_strv = NULL;
  g_settings_list_schemas = NULL;

}
