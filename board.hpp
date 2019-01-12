#ifndef BOARD_HPP
#define BOARD_HPP

#include <vector>
#include <iostream>

typedef std::vector<char> Line;

class Board
{
public:
	Board(const unsigned int);

	void set(uint, uint, char);

	const std::vector<Line>& getContent() const;
	std::vector<Line>& getContent();

	std::ostream& print(std::ostream&) const;

private:
	std::vector<Line> content;
	uint length;
};

#endif