#include "render_component.hpp"

#include "../entity.hpp"
RenderComponent::~RenderComponent()
{
	std::cout << "Destroyed Render Component with content: "
		<< glyph << std::endl;
}

std::string RenderComponent::getName() const
{
	return "RenderComponent";
}

char RenderComponent::getGlyph() const
{
	return this->glyph;
}

void RenderComponent::setGlyph(char glyph)
{
	this->glyph = glyph;
}

Entity* RenderComponent::getEntity() const
{
	return Component::getEntity();
}

std::ostream& operator << (std::ostream& os, 
	const RenderComponent& ren_component)
{
	os << ren_component.getName() << ": "
		<< "("
		<< ren_component.getEntity()->getId()
		<< ", "
		<< ren_component.getGlyph()
		<< ")";
	return os;
}
