#include "Input.h"

Input::Input() {}

Input::Input(sf::Window *window) : window(window)
{
	
}


void Input::handle(std::vector<Handler*> entityHandlers) {
	//keysDown.clear();

	sf::Event event = sf::Event();
	while (window->pollEvent(event)) {
		switch (event.type) {
		case sf::Event::Closed:
			this->closeOrdered = true;
			break;
		case sf::Event::KeyPressed:
			for (int i = 0; i < entityHandlers.size(); i++) {
				entityHandlers[i]->keyPress(event.key.code);
				
			}
			break;
		case sf::Event::KeyReleased:
			for (int i = 0; i < entityHandlers.size(); i++) {
				entityHandlers[i]->keyRelease(event.key.code);
			}
			break;
		case sf::Event::MouseButtonPressed:
			for (int i = 0; i < entityHandlers.size(); i++) {
				entityHandlers[i]->mousePress(event.mouseButton.button);
			}
			break;
		case sf::Event::MouseButtonReleased:
			for (int i = 0; i < entityHandlers.size(); i++) {
				entityHandlers[i]->mouseRelease(event.mouseButton.button);
			}
			break;
		case sf::Event::MouseMoved:
			for (int i = 0; i < entityHandlers.size(); i++) {
				entityHandlers[i]->mouseMove(event.mouseMove.x, event.mouseMove.y);
			}
			break;
		default:
			break;
		}
	}
}

bool Input::keyDown(char key) {
	sf::Keyboard::Key sfkey = sf::Keyboard::Unknown;

	switch (key) {
	case 'a':
		sfkey = sf::Keyboard::A;
		break;
	case 'd':
		sfkey = sf::Keyboard::D;
		break;
	case 's':
		sfkey = sf::Keyboard::S;
		break;
	case 'w':
		sfkey = sf::Keyboard::W;
		break;
	default:
		break;
	}
	
	return sf::Keyboard::isKeyPressed(sfkey);
}
