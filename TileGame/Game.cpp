#include "Game.h"

#include <string>
#include <iostream>

Game::Game() {
	init();
}

void Game::init() {
	input = Input(&(renderer.window));

	entityTree = Entity();
	entityTree.children.push_back(Entity(&entityTree, &entityTree));
	entityTree.children[0].size = Vector2(20, 20);
	entityTree.children[0].pos = Vector2(20, 20);
	//entityTree.children[0].vel.x = 5;

	handlers.push_back(new PlayerHandler(&(entityTree.children[0])));
	
	step();
}

void Game::step() {
	while (!input.closeOrdered) {
		physics.handle(entityTree);
		//entityTree.children[0].pos.x += 1;
		renderer.handle(entityTree, 0);
		input.handle(this->handlers);

		sf::Event event;
		for (int i = 0; i < handlers.size(); i++) {
			//handlers[i].handle(&input);
		}
	}
}