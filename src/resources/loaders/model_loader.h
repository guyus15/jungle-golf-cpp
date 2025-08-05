#pragma once

#include "loader.h"

#include <assimp/Importer.hpp>
#include <assimp/scene.h>

class ModelLoader : public Loader
{
public:
    ResourceHandle Load(const std::string &path);
    void Unload();

private:
    void ProcessNode(const aiNode *node, const aiScene *scene);
    ResourceHandle ProcessMesh(const aiMesh *mesh, const aiScene *scene);
};