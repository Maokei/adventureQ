//AdventureQ
#include "Engine.hpp"
Engine::Engine() {
	TCODConsole::initRoot(80,50,"libtcod tut adventureQ", false);
	player = new Actor(40,50,'@',TCODColor::white);
	actors.push(player);
	actors.push(new Actor(60,13,'@',TCODColor::yellow));
	map = new Map(80,45);
}
Engine::~Engine() {
	actor.clearAndDelete();
	delete map;
}
void Engine::Update() {
	TCOD_key_t key;
	TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS,&key,NULL);
	switch(key.vk) {
		case TCODK_UP :
			if(!map->isWAll(player->x,player->y-1)) {
				player->y--;
			}
		break;
		case TCOD_DOWN :
			if(!map->isWALL(player->x,player->y+1)) {
				player->y++;
			}
		break;
		case TCOD_LEFT :
			if(!map->isWALL(player->x-1,player->y)) {
				player->x--;
			}
		break; 
		case TCOD_RIGHT :
			if(!map->isWALL(player->x+1,player->y)) {
				player->x++;
			}
		break;
		default:break;
		}
}
Engine::render() {
	TCODConsole::root->clear();
	//draw map
	map->render();
	//Draw the actors
	for(Actor **iterator=actors.begin(); iterator != actors.end(); iterator++) {
		(*iterator)->render();
	}
}
