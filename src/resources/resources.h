#pragma once

#include "handle.h"

#include <unordered_map>

class ResourceManager
{
public:
    ResourceManager();
    ~ResourceManager();

    ResourceManager(const ResourceManager &other) = delete;
    ResourceManager &operator=(const ResourceManager &other) = delete;

    ResourceManager(ResourceManager &&other);
    ResourceManager &operator=(ResourceManager &&other);

    void Initialise();
    const ResourceHandle LoadTexture();
    const ResourceHandle LoadModel();

private:
    std::unordered_map<uint64_t, ResourceHandle> m_registry;
};