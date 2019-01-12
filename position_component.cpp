#include "position_component.hpp"

PositionComponent::~PositionComponent()
{
	std::cout << "Destroyed a Position Component with data:"
	<< "x: " << x << ", y: " << y << std::endl;
}

std::string PositionComponent::getName() const
{
	return "PositionComponent";
}

Entity* PositionComponent::getEntity() const
{
	return Component::getEntity();
}