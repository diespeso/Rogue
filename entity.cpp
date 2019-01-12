#include "entity.hpp"

uint Entity::counter = 0;

Entity::~Entity()
{
	for (std::pair<Component::Type,
	Component*> pair: this->components)
	{
		delete pair.second;
	}
}

uint Entity::getId() const
{
	return this->id;
}

void Entity::addComponent(Component::Type type, Component* component)
{
	this->components[type] = component;
}

std::vector<Component::Type> Entity::getComponents() const
{
	std::vector<Component::Type> compos;
	for (auto i = components.cbegin(); i != components.cend(); i++)
	{
		compos.push_back(i->first);
	}

	return compos;
}

std::ostream& operator << (std::ostream& os,
	const Entity& entity)
{
	os << entity.getId() << "{";
	for (auto pair : entity.components)
	{
		os << pair.first << ": "
			<< *pair.second << ", ";
	}
	os << "}";
	return os;
}

