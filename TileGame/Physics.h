#pragma once

#include <chrono>

#include "Entity.h"

class Physics
{
private:
	int move(Entity&);
	//auto lastTime = std::chrono::high_resolution_clock::now();
public:
	Physics();
	int handle(Entity&);
};

