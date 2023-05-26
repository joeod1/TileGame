#include "Entity.h"

Entity::Entity() {
	vel = Vector2(2, 2);
}

Entity::Entity(Entity* parent, Entity* root) : parent(parent), root(root) {
	//root->children.push_back(*this);
	//pos = Vector2(50, 50);
	//size = Vector2(50, 50);
}