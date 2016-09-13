#include "../Entity/sprite.cpp"
#pragma once

namespace entity
{
	struct Entity
	{
		//Variables
		int centerX;
		int centerY;
		int centerVelocityX;
		int centerVelocityY;
		entity::Sprite *parts;

		//Constructors
		Entity(entity::Sprite Sprites[])
		{
			centerX = 0;
			centerY = 0;
			centerVelocityX = 0;
			centerVelocityY = 0;
			parts = Sprites;
		}

		Entity()
		{
			centerX = 0;
			centerY = 0;
			centerVelocityX = 0;
			centerVelocityY = 0;
		}

		void setPosition(int x, int y) // sets entity members position
		{
			for (int i = 0; i < 2; ++i) // needs fixed
			{
				parts[i].setPosition(x, y);
			}
			centerX = x;
			centerY = y;
		}


		void setColor(sf::Color color, int sprite) // sets sprite color
		{
			parts[sprite].setColor(color);
		}

		// Return the entity's array of sprites as a pointer value
		entity::Sprite *getSprites()
		{
			return parts;
		}
	};
}