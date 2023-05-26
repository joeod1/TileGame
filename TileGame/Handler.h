#pragma once

#include <SFML/Window.hpp>

class Handler
{
public:
	virtual void keyPress(enum sf::Keyboard::Key);
	virtual void keyRelease(enum sf::Keyboard::Key);
	virtual void mousePress(enum sf::Mouse::Button);
	virtual void mouseRelease(enum sf::Mouse::Button);
	virtual void mouseMove(int, int);
};

