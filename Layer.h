#pragma once
class Layer
{
public:
	const static int DEFAULT		= 1 << 1;
	const static int PLAYER			= 1 << 2;
	const static int ENEMY			= 1 << 3;
	const static int ITEM			= 1 << 4;
	const static int PLAYER_BULLET	= 1 << 5;
	const static int ENEMY_BULLET	= 1 << 6;
	const static int SHEILD			= 1 << 7;
	const static int BOMB			= 1 << 8;
	const static int BLOCK			= 1 << 9;
};

