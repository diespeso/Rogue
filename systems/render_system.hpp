#ifndef RENDER_SYSTEM_HPP
#define RENDER_SYSTEM_HPP

#include <vector>

#include "../board.hpp"
#include "system.hpp"
#include "../components/render_component.hpp"
#include "../entity.hpp"


class RenderSystem: public System
{
public:
	RenderSystem(Board*);
	~RenderSystem();

	void add(Entity*, RenderComponent*);
	void update() override;

	friend std::ostream& operator << (std::ostream&,
		const RenderSystem&);

private:
	std::vector<RenderComponent*> targets;
	Board* board;
};

#endif