#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <iostream>

class Entity;

class Component
{
public:
	Component(Entity*);
	virtual ~Component();

	virtual std::string getName() const;

	enum Type
	{
		Render,
		Position
	};

	virtual Entity* getEntity() const;

	friend std::ostream& operator <<(std::ostream&,
		const Component&);
protected:
	Entity* entity;
};

std::ostream& operator <<(std::ostream&,
	const Component::Type&);

#endif