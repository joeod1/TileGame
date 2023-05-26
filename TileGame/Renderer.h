#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "Entity.h"

class Renderer
{
private:
	void render(Entity);
public:
	sf::RenderWindow window;
	Renderer();
	void createWindow();
	int handle(Entity, int);
};

