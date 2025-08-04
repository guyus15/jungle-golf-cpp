#pragma once

#include "loader.h"

class ModelLoader : public Loader
{
public:
    ResourceHandle Load(const std::string &path);
    void Unload();
};