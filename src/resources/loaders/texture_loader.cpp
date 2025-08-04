#include "texture_loader.h"

#include <iostream>

ResourceHandle TextureLoader::Load(const std::string &path)
{
    std::cout << "Loading texture at path '" << path << "'.\n";
    return ResourceHandle();
}

void TextureLoader::Unload()
{
    std::cout << "Unloading texture.\n";
}