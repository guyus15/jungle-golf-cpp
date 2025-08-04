#include "resources.h"

ResourceManager::ResourceManager()
{
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

void ResourceManager::Initialise()
{
}

const ResourceHandle ResourceManager::LoadTexture()
{
    return ResourceHandle();
}

const ResourceHandle ResourceManager::LoadModel()
{
    return ResourceHandle();
}
