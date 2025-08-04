#pragma once

#include "handle.h"

#include <string>

struct Material
{
    std::string name;
    ResourceHandle albedo_texture;
    ResourceHandle normal_texture;
    // ...
};