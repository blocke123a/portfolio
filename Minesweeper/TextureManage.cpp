#include "TextureManage.h"

unordered_map<string, sf::Texture> TextureManage::myTextures;

void TextureManage::LoadTexture(string textureName) {
    string filePath = textureName + ".png";
    myTextures[textureName].loadFromFile(filePath);
}

sf::Texture& TextureManage::GetTexture(string textureName) {
    if (myTextures.find(textureName) == myTextures.end()) {
        // if the texture isn't already in the map, loads the texture
        LoadTexture(textureName);
    }

    return myTextures[textureName];
}

void TextureManage::Clear() {
    // empties the map
    myTextures.clear();
}