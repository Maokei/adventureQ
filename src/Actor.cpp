#include "Actor.hpp"

Actor(int x, int y, int ch, const TCODColor &col) : 
	x(x),y(y),ch(ch),col(col); {
}
void render() const {
	TCODConsole::root->setChar(x,y,ch);
	TCODConsole::root->setCharForeground(x,y,ch);
}
