#pragma once

#include "handle.h"
#include "loaders/loader.h"

#include <memory>
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

    const ResourceHandle LoadTexture(const std::string &path);
    const ResourceHandle LoadModel(const std::string &path);

private:
    std::unordered_map<uint64_t, ResourceHandle> m_registry;
    std::unique_ptr<Loader> m_model_loader;
    std::unique_ptr<Loader> m_texture_loader;
};