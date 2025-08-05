#include "model_loader.h"

#include <assimp/postprocess.h>

#include <iostream>

ResourceHandle ModelLoader::Load(const std::string &path)
{
    std::cout << "Loading model at path '" << path << "'.\n";

    Assimp::Importer importer;

    const aiScene *scene = importer.ReadFile(
        path.c_str(),
        aiProcess_CalcTangentSpace |
            aiProcess_Triangulate |
            aiProcess_JoinIdenticalVertices);

    if (nullptr == scene || scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || nullptr == scene->mRootNode)
    {
        std::cerr << "Failed to load model at '" << path << "': Model is incomplete or missing root node.\n";
    }

    if (scene->mNumMeshes == 0 || nullptr == scene->mMeshes)
    {
        std::cerr << "Failed to load model at '" << path << "': No meshes found in the model.\n";
    }

    std::cout << "Successfully loaded model '" << path << "'.\n ";

    ProcessNode(scene->mRootNode, scene);

    ResourceHandle handle{};
    // handle.hash = ...
    handle.type = ResourceType::Model;
    // handle.data = ...

    return handle;
}

void ModelLoader::Unload()
{
    std::cout << "Unloading model.\n";
}

void ModelLoader::ProcessNode(const aiNode *node, const aiScene *scene)
{
}

ResourceHandle ModelLoader::ProcessMesh(const aiMesh *mesh, const aiScene *scene)
{
    return ResourceHandle();
}
