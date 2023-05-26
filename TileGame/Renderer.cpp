#include "Renderer.h"

Renderer::Renderer() {
	createWindow();
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(60);
	window.setKeyRepeatEnabled(false);
}

int Renderer::handle(Entity entity, int depth=0) {
	if (!depth) window.clear(sf::Color(30, 30, 30));

	sf::RectangleShape shape;//render(entity);
	shape.setSize(sf::Vector2f(entity.size.x, entity.size.y));
	shape.setPosition(sf::Vector2f(entity.pos.x, entity.pos.y));
	shape.setFillColor(sf::Color(200, 200, 200));

	window.draw(shape);

	for (int i = 0; i < entity.children.size(); i++) {
		handle(entity.children[i], depth + 1);
	}

	if (!depth) window.display();
	return 0;
}

void Renderer::render(Entity entity) {

	window.draw(sf::RectangleShape(sf::Vector2f(10, 10)));
}

void Renderer::createWindow() {
	//window.create(sf::VideoMode::getFullscreenModes()[0]	, "Game", sf::Style::Fullscreen);
	window.create(sf::VideoMode(640, 480, 32U), "Game", sf::Style::Default);
}
