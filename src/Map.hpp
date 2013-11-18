//Map class
//AdventureQ
#include "libtcod.hpp"
struct Tile {
	bool canWalk; //Can walk through tile?
	Tile() : canWalk(true) {}
}
class Map {
	public:
		int width, int height;
	
		Map(int width, int height);
		~Map();
		bool isWall(int x, int y) count;
		void render() const;
	protected:
		Tile *tiles;
		void setWall(int x, int y);
};
