#pragma once

#include <cstdint>

enum class ResourceType
{
    Texture,
    Model
};

struct ResourceHandle
{
    uint64_t hash;
    ResourceType type;
};
