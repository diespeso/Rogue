#ifndef GAME_HPP
#define GAME_HPP

#include "systems/render_system.hpp"
#include "components/position_component.hpp"
#include "board.hpp"

class Game
{
public:
	Game();
private:
	RenderSystem ren_system;
	Board board;
};

#endif