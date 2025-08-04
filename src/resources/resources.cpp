#include "resources.h"
#include "loaders/model_loader.h"
#include "loaders/texture_loader.h"

ResourceManager::ResourceManager()
{
    m_model_loader = std::make_unique<ModelLoader>();
    m_texture_loader = std::make_unique<TextureLoader>();
}

ResourceManager::~ResourceManager()
{
}

ResourceManager::ResourceManager(ResourceManager &&other)
{
    if (&other != this)
    {
        m_registry = other.m_registry;
    }
}

ResourceManager &ResourceManager::operator=(ResourceManager &&other)
{
    if (&other != this)
    {
        m_registry = other.m_registry;
    }

    return *this;
}

const ResourceHandle ResourceManager::LoadTexture(const std::string &path)
{
    auto handle = m_texture_loader->Load(path);
    return handle;
}

const ResourceHandle ResourceManager::LoadModel(const std::string &path)
{
    auto handle = m_model_loader->Load(path);
    return handle;
}
