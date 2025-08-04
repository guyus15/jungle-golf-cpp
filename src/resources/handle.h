#pragma once

#include <cstdint>
#include <memory>

enum class ResourceType
{
    Texture,
    Model,
    Material
};

struct ResourceHandle
{
    uint64_t hash;
    ResourceType type;
    std::shared_ptr<void> data;

    template <typename T>
    std::shared_ptr<T> As() const
    {
        return std::static_pointer_cast<T>(data);
    }
};
