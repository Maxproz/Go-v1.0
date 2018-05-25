
#pragma once

#ifndef BOARD_CPP
#define BOARD_CPP

// State of a intersection on the board. 
// - move this to the position class if you end up making it.
enum class State
{
	EMPTY,
	WHITE_STONE,
	BLACK_STONE
};

class Board
{
public:
	Board();
	~Board();
};

#endif // !BOARD_CPP

