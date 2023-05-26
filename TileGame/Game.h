#pragma once

#include <vector>

#include "Handler.h"
#include "PlayerHandler.h"
#include "Renderer.h"
#include "Physics.h"
#include "Tilemap.h"
#include "Entity.h"
#include "Input.h"

class Game
{
private:
	Renderer renderer;
	Physics physics;
	Input input;

	void init();
	void step();
public:
	Entity entityTree;
	std::vector<Handler*> handlers;
	

	Game();
};

