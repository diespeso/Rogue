#ifndef POSITION_COMPONENT_HPP
#define POSITION_COMPONENT_HPP

#include "component.hpp"

class PositionComponent: public Component 
{
public:
	PositionComponent(Entity* entity, uint x, uint y):
		Component(entity)
	{
		this->x = x;
		this->y = y;
	}

	~PositionComponent();

	std::string getName() const override;

	Entity* getEntity() const override; //try to fix
	//this shouldn't be necessary and its only used
	//with operator <<

	uint x;
	uint y;
};

#endif