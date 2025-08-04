#pragma once

#include "loader.h"

class TextureLoad : public Loader
{
public:
    ResourceHandle Load();
    void Unload();
};