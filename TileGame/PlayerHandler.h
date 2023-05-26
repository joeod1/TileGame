#pragma once

//#include <SFML/Window.hpp>
#include "Handler.h"
#include "Entity.h"
#include "Input.h"

class PlayerHandler : public Handler
{
public:
	Entity* character;
	PlayerHandler();
	PlayerHandler(Entity*);
	void handle(Input*);
	void keyPress(enum sf::Keyboard::Key);
	void keyRelease(enum sf::Keyboard::Key);
};

