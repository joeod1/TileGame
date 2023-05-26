#include "Physics.h"

Physics::Physics() {}

int Physics::move(Entity &entity) {
	entity.pos = entity.pos + entity.vel;
	return 0;
}

int Physics::handle(Entity &entity) {
	move(entity);

	for (int i = 0; i < entity.children.size(); i++) {
		handle(entity.children[i]);
	}

	return 0;
}