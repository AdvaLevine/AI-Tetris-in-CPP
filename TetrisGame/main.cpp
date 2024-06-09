#include "TetrisGame.h"

/*This program is running a two player Tetris Game:
first the menu is printed with the options for- start a new game(with different options- regular or computers), change game colors (black or gray),
show instructions and keys, or exit the game
then according to players choice it runs a two players tetris game with 7 different shapes that can rotate, move left right and drop down.
Theres a bomb option that when player gets it, it removes the points in its range from the screen, giving that player an advantage.
during the game, if esc is pressed, the option to continue the game from where it stopped is also presented.
A player lost if his shape reaches the top of the board and a message is printed announcing the winner, then the menu opens once again*/

void main()
{
	srand(time(0));
	TetrisGame Game;
	Game.start();
}