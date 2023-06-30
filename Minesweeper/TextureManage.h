#pragma once
#include <SFML/Graphics.hpp>
#include <unordered_map>
#include <string>
using namespace std;

class TextureManage {
    static unordered_map<string, sf::Texture> myTextures;
    static void LoadTexture(string textureName);
public:
    static sf::Texture& GetTexture(string textureName);
    static void Clear();
};