#include <stdio.h>
#include <string.h>

#include "board.h"
#include "moves.h"

void init_game() {
	//Creates the board and displays it for the first time
	piece board[8][8];
	generate_board(board);
	int turn = 0;
	//Variables for storing move info
	char move[5];
	coordinate moveTo;
	coordinate moveFrom;
	//Game bucle
	int validMove;
	while (validateCheckmate(board) == 0) {
		printf("Inside game bucle\n");
		printf("Turn: %d\n", turn);
		display_board(board);
		if (turn == 0){
			//Get the movement instructions if it is a not valid move, it repeats the code until getting a valid move
			validMove = 0;
			while (validMove == 0) {
				//Sintax for making a move: <x1><y1><x2><y2> o <moveFrom.x><moveFrom.y><moveTo.x><moveTo.y>
				printf("Blancas:\n");
				scanf("%s", move);
				moveFrom.x = changeAsciiToDecimal(move[0]);
				moveFrom.y = changeAsciiToDecimal(move[1]);
				moveTo.x =  changeAsciiToDecimal(move[2]);
				moveTo.y =  changeAsciiToDecimal(move[3]);
				printf("%d %d %d %d\n", move[0], move[1], move[2], move[3]);
				printf("moveFrom: %d %d\n", moveFrom.x, moveFrom.y);
				printf("moveTo: %d %d\n", moveTo.x, moveTo.y);
				validMove = toMove(moveFrom, moveTo, board);
			}
			//Change turn to 1
			turn++;
		} else if (turn == 1) {
			//Get the movement instructions if it is a not valid move, it repeats the code until getting a valid move
			validMove = 0;
			while(validMove == 0) {
				//Sintax for making a move: <x1><y1><x2><y2> o <moveFrom.x><moveFrom.y><moveTo.x><moveTo.y>
				printf("Negras:\n");
				scanf("%s", move);
				moveFrom.x = changeAsciiToDecimal(move[0]);
				moveFrom.y = changeAsciiToDecimal(move[1]);
				moveTo.x =  changeAsciiToDecimal(move[2]);
				moveTo.y =  changeAsciiToDecimal(move[3]);
				printf("%d %d %d %d\n", move[0], move[1], move[2], move[3]);
				printf("MoveFrom: %d %d\n", moveFrom.x, moveFrom.y);
				printf("MoveTo: %d %d\n", moveTo.x, moveTo.y);
				validMove = toMove(moveFrom, moveTo, board);
			}
			//Change turn to 0
			turn--;
		}
	}
}