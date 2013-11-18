//AdventureQ
//
#include "libtcod.hpp"
class Actor {
	public:
		int x, y; //pos
		int ch;	//ascii code
		TCODColor col; //Color
		
		Actor(int x, int y, int ch, const TCODColor col);
		
		void render() const;
};
