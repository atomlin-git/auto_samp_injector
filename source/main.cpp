#include "injector.hpp"

injector ptr;
injector::injector() {
    if(!std::string(GetCommandLineA()).contains("-auto")) return;
    if(!std::filesystem::exists("samp.dll")) return;
    LoadLibraryA("samp.dll");
};
