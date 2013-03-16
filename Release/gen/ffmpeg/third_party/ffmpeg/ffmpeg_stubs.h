// This is generated file. Do not modify directly.

#ifndef THIRD_PARTY_FFMPEG_
#define THIRD_PARTY_FFMPEG_

#include <map>
#include <string>
#include <vector>

#include "base/logging.h"

namespace third_party_ffmpeg {
// Individual module initializer functions.
bool IsFfmpegsumoInitialized();
void InitializeFfmpegsumo(void* module);
void UninitializeFfmpegsumo();

// Enum and typedef for umbrella initializer.
enum StubModules {
  kModuleFfmpegsumo = 0,
  kNumStubModules
};

typedef std::map<StubModules, std::vector<std::string> > StubPathMap;

// Umbrella initializer for all the modules in this stub file.
bool InitializeStubs(const StubPathMap& path_map);
}  // namespace third_party_ffmpeg

#endif  // THIRD_PARTY_FFMPEG_
