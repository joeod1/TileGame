#pragma once

#include <SFML/Window.hpp>
#include <vector>
#include <unordered_map>
#include "Handler.h"

class Input
{
public:
	std::unordered_map<sf::Keyboard::Key, bool> keysDown;
	sf::Window* window;
	bool closeOrdered = false;
	Input();
	Input(sf::Window*);
	void handle(std::vector<Handler*>);
	static bool keyDown(char);
};

