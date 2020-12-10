#include "AssetManager.h"

sf::Texture *AssetManager::getOrLoadAsset(std::string path) {
    std::string full_path = "../../" + path;
    auto &asset = assets_[path];
    if (!asset) {
        asset = std::make_unique<sf::Texture>();
        asset->loadFromFile(full_path);
    }
    return asset.get();
}