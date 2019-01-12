#include "board.hpp"

Board::Board(const unsigned int length)
{
	this->length = length;
	this->content = std::vector<Line>(length);
	for (Line& line : this->content)
	{
		line = Line(length, '0');
	}
}

void Board::set(uint x, uint y, char c)
{
	this->content[x][y] = c;
}

const std::vector<Line>& Board::getContent() const
{
	return this->content;
}

std::vector<Line>& Board::getContent()
{
	return this->content;
}

std::ostream& Board::print(std::ostream& os = std::cout) const
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1; j++)
		{
			os << content[i][j] << " ";
		}
		os << std::endl;
	}
	return os;
}