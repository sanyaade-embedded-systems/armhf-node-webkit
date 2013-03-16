// This is generated file. Do not modify directly.
// Path to the code generator: tools/generate_library_loader/generate_library_loader.py .

#ifndef LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H
#define LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H

extern "C" {
#include <pci/pci.h>

}
#define LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN


#include <string>

#include "base/basictypes.h"
#include "base/compiler_specific.h"
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN)
#include "base/native_library.h"
#endif

class LibPciLoader {
 public:
  LibPciLoader();
  ~LibPciLoader();

  bool Load(const std::string& library_name) WARN_UNUSED_RESULT;

  bool loaded() const { return loaded_; }

  typeof(&::pci_alloc) pci_alloc;
  typeof(&::pci_init) pci_init;
  typeof(&::pci_cleanup) pci_cleanup;
  typeof(&::pci_scan_bus) pci_scan_bus;
  typeof(&::pci_fill_info) pci_fill_info;
  typeof(&::pci_lookup_name) pci_lookup_name;


 private:
  void CleanUp(bool unload);

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN)
  base::NativeLibrary library_;
#endif

  bool loaded_;

  DISALLOW_COPY_AND_ASSIGN(LibPciLoader);
};

#endif  // LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H
