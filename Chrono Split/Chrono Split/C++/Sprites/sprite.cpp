#include <SFML/Graphics.hpp>
#include <unordered_map>
#include <string>

// Ensures things aren't imported multiple times
#pragma once

namespace Sprites
{
	struct Sprite : sf::Sprite
	{
		//Stores an images with string name to a map
		std::unordered_map<std::string, sf::Texture> images;

		//Adds an image with a name to the map
		void addImage(std::string name, sf::Texture picture)
		{
			images[name] = picture;
		}

		//Retrive image by name
		sf::Texture getImage(std::string name)
		{
			return images[name];
		}

	};
}