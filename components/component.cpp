#include "component.hpp"

Component::Component(Entity* entity)
{
	this->entity = entity;
}

Component::~Component()
{
	std::cout << "Destroyed Component" << std::endl;
}

std::string Component::getName() const
{
	return "[Generic_Component]";
}

Entity* Component::getEntity() const
{
	return this->entity;
}

std::ostream& operator <<(std::ostream& os,
	const Component& component)
{
	os << component.getName();
	return os;
}

std::ostream& operator <<(std::ostream& os,
	const Component::Type& type)
{
	switch (type)
	{
		case Component::Type::Render:
			os << "[RenderComponent]";
			break;
		case Component::Type::Position:
			os << "[PositionComponent]";
			break;
		default:
			os << "???????????????";
	}

	return os;
}