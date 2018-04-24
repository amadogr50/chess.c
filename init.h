#include <stdio.h>
#include <string.h>

#include "board.h"
#include "moves.h"

void init_game() {
	//Creates the board and displays it for the first time
	piece board[8][8];
	generate_board(board);
	display_board(board);
	int turn = 0;
	//Variables for storing move info
	char move[5];
	coordinate moveTo;
	coordinate moveFrom;
	//Game bucle
	do {
		if (turn == 0){
			//Get the movement instructions if it is a not valid move, it repeats the code until getting a valid move
			do {
				//Sintax for making a move: <x1><y1><x2><y2> o <moveFrom.x><moveFrom.y><moveTo.x><moveTo.y>
				gets(move);
				strcpy(moveFrom.x, move[0]);
				moveFrom.y = move[1];
				strcpy(moveTo.x, move[2]);
				moveTo.y = move[3];
				validMove = moveTo(moveFrom, moveTo, board);
			} while(validMove == 0);
			//Change turn to 1
			turn++;
		} else {
			//Get the movement instructions if it is a not valid move, it repeats the code until getting a valid move
			do {
				//Sintax for making a move: <x1><y1><x2><y2> o <moveFrom.x><moveFrom.y><moveTo.x><moveTo.y>
				gets(move);
				strcpy(moveFrom.x, move[0]);
				moveFrom.y = move[1];
				strcpy(moveTo.x, move[2]);
				moveTo.y = move[3];
				validMove = moveTo(moveFrom, moveTo, board);
			} while(validMove == 0);
			//Change turn to 0
			turn--:
		}
	} while(validateCheckmate() == 0);
}