#include "game.hpp"
#include <iostream>

int main()
{
	Board b = Board(10);

	RenderSystem ren_sys = RenderSystem(&b);
	Entity ent;
	Entity two;
	ent.addComponent(Component::Type::Position,
		new PositionComponent(&ent, 3, 2));
	ren_sys.add(&ent,
		new RenderComponent(&ent, '-'));
	ren_sys.add(&two,
		new RenderComponent(&two, '~'));



	ren_sys.update();
	
}