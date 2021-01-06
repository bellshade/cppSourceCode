#ifndef SS_HEADER_FOOD_H_
#define SS_HEADER_FOOD_H_

#include "engine.h"

#include <SFML/Graphics.hpp>
#include <random>
#include <iostream>
namespace game {
	/*
	Food: represents the Food object snake eats.
	It is represented by a sf::RectangleShape
	*/
	
	class Food {
	public:
		Food(sf::RenderWindow *, sf::Vector2f loc);
		sf::RectangleShape getFood();
		void drawFood();
		~Food() {
			std::cout << "Food\n";
		}
	private:
		sf::Color color;
		sf::Vector2f location;
		sf::RectangleShape food;
		sf::RenderWindow *screen;
	};

}

#endif
