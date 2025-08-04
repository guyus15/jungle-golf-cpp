#pragma once

#include "loader.h"

class ModelLoader : public Loader
{
public:
    ResourceHandle Load();
    void Unload();
};