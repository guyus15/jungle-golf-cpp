#pragma once

#include "../handle.h"

#include <string>

class Loader
{
public:
    virtual ResourceHandle Load(const std::string &path) = 0;
    virtual void Unload() = 0;
};