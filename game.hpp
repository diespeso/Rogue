#ifndef GAME_HPP
#define GAME_HPP

#include "render_system.hpp"
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