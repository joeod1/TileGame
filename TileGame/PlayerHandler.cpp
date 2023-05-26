#include "PlayerHandler.h"
#include "Input.h"

PlayerHandler::PlayerHandler() {
	character = nullptr;
}

PlayerHandler::PlayerHandler(Entity* entity) : character(entity) {

}

void PlayerHandler::handle(Input *input) {
	/*Vector2 v;
	
	if (Input::keyDown('d')) v.x = 0.25;
	if (Input::keyDown('a')) v.x = -0.25;
	if (Input::keyDown('s')) v.y = 0.25;
	if (Input::keyDown('w')) v.y = -0.25;

	character->vel = v.getUnitVector() * 3;

	if (!character->vel.m) {
		character->vel = Vector2(0, 0);
	}*/
}

void PlayerHandler::keyPress(sf::Keyboard::Key key) {
	Vector2 v;

	if (Input::keyDown('d')) v.x = 0.25;
	if (Input::keyDown('a')) v.x = -0.25;
	if (Input::keyDown('s')) v.y = 0.25;
	if (Input::keyDown('w')) v.y = -0.25;

	character->vel = v.getUnitVector() * 3;

	if (!character->vel.m) {
		character->vel = Vector2(0, 0);
	}
}

void PlayerHandler::keyRelease(sf::Keyboard::Key key) {
	Vector2 v;

	if (Input::keyDown('d')) v.x = 0.25;
	if (Input::keyDown('a')) v.x = -0.25;
	if (Input::keyDown('s')) v.y = 0.25;
	if (Input::keyDown('w')) v.y = -0.25;

	character->vel = v.getUnitVector() * 3;

	if (!character->vel.m) {
		character->vel = Vector2(0, 0);
	}
}