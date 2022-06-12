#pragma once
#include "Tile.h"

class TileFactory
{
public:
	Tile* getTile(string type)
	{
		if (type == "Common")
		{
			return new CommonTile();
		}

		else if (type == "Bomb")
		{
			return new BombTile();
		}

		else if (type == "Rocket")
		{
			return new RocketTile();
		}

		else if (type == "Rubic")
		{
			return new RubicTile();
		}
	}
};