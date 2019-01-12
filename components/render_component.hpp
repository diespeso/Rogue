#ifndef RENDER_COMPONENT_HPP
#define RENDER_COMPONENT_HPP

#include "component.hpp"
#include "../board.hpp"

class RenderComponent: public Component
{
public:
	RenderComponent(Entity* entity, char glyph):
	Component(entity)
	{
		this->glyph = glyph;
	}

	~RenderComponent();

	std::string getName() const override;
	Entity* getEntity() const override;

	char getGlyph() const;
	void setGlyph(char);

	friend std::ostream& operator <<(std::ostream&,
		const RenderComponent&);

private:
	char glyph;
};

#endif