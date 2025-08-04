#include "model_loader.h"

#include <iostream>

ResourceHandle ModelLoader::Load(const std::string &path)
{
    std::cout << "Loading model at path '" << path << "'.\n";
    return ResourceHandle();
}

void ModelLoader::Unload()
{
    std::cout << "Unloading model.\n";
}
