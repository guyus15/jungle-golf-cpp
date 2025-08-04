#pragma once

#include "handle.h"

#include <vector>

class Model
{
    Model(const std::vector<ResourceHandle> &m_materials,
          const std::vector<ResourceHandle> &m_meshes);

private:
    std::vector<ResourceHandle> m_materials;
    std::vector<ResourceHandle> m_meshes;
};