#include "render_system.hpp"
#include "position_component.hpp"
#include "util.hpp"

#include <iostream>

RenderSystem::RenderSystem(Board* board)
{
	this->targets = std::vector<RenderComponent*>();
	this->board = board;
}

RenderSystem::~RenderSystem()
{
	std::cout << "Destroyed Render System" << std::endl;
}

void RenderSystem::add(Entity* entity,
	RenderComponent* ren_comp)
{
	if (!Util::find(entity->getComponents(),
		Component::Type::Position))
		std::cout << "Warning: Added an entity with no " << Component::Type::Position
			<< " to RenderSystem" << std::endl;
	entity->addComponent(Component::Type::Render,
		ren_comp);
	this->targets.push_back(ren_comp);
}

void RenderSystem::update()
{
	for (RenderComponent* target : this->targets)
	{
		PositionComponent* p_comp;
		p_comp = target->getEntity()->getComponent<PositionComponent>(
			Component::Type::Position);
		if (p_comp) 
			board->set(p_comp->x, p_comp->y, target->getGlyph());
	}
	this->board->print(std::cout);
}

std::ostream& operator << (std::ostream& os,
	const RenderSystem& ren_system)
{
	os << "RenderSystem{ " << std::endl;
	for (RenderComponent* ren_component: ren_system.targets)
	{
		os << "\t"
		<< *ren_component
		<< std::endl;
	}
	os << "}";
	return os;
}