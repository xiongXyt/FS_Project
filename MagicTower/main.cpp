#include"Game.h"

bool flag = false;
int main() {
	Game game;

	game.GameInit(); 
	while (!::flag) {
		game.GameRender();
		game.GameUpdate();
	} 
	return 0;
}