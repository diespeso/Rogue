#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "non_copyable.hpp"
#include "components/component.hpp"
#include "util.hpp"
#include <map>
#include <vector>

typedef unsigned int uint;

class Entity: public NonCopyable
{
public:
	Entity(): NonCopyable()
	{
		this->id = counter++;
		this->components = std::map<Component::Type,
			Component*>();
	}

	~Entity();

	uint getId() const;

	void addComponent(Component::Type, Component*);

	template <typename ComponentType>
	ComponentType* getComponent(Component::Type type){
		if (Util::find(this->getComponents(), type))
			return dynamic_cast<ComponentType*>(
				this->components[type]);
		else
			return nullptr;
	}

	std::vector<Component::Type> getComponents() const;

	friend std::ostream& operator <<(std::ostream&,
		const Entity&);
protected:
	uint id;
private:
	static uint counter;
	std::map<Component::Type, Component*> components;

	Entity(const Entity&){}

};

#endif