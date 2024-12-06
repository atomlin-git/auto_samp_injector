#include "injector.hpp"

injector ptr;

injector::injector() {
    auto arguments = GetCommandLineA();
    if(!std::string(arguments).contains("-auto")) return;
    if(!std::filesystem::exists("samp.dll")) return;
    LoadLibraryA("samp.dll");
};