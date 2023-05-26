#pragma once

#include <vector>

#include "Vector2.h"

class Entity
{
public:
	std::vector<Entity> children;
	Entity* parent;
	Entity* root;
	float speed = 1;
	Vector2 pos, size, vel;
	//sf::Shape ;

	Entity();
	Entity(Entity*, Entity*);
};

