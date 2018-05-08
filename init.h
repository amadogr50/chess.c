/*
	Library for managing the game bucle.
*/

#include <stdio.h>
#include <string.h>
#include "board.h"
#include "moves.h"
#include "cmv.h"
#include "scores.h"

void readMoves(int turnPlayer, coordinate moveFrom, coordinate moveTo, char move[5], int *validMove, piece board[8][8]){
	//Function to determinate
	moveFrom.x = changeAsciiToDecimal(move[0]);
	moveFrom.y = changeAsciiToDecimal(move[1]);
	moveTo.x =  changeAsciiToDecimal(move[2]);
	moveTo.y =  changeAsciiToDecimal(move[3]);
	*validMove = toMove(turnPlayer, moveFrom, moveTo, board);
}

void init_game() {
	//Creates the board and displays it for the first time
	piece board[8][8];
	generate_board(board);
	int turn = 2;
	//Variables for storing move info
	char move[5];
	coordinate moveTo;
	coordinate moveFrom;
	//Game bucle
	int validMove;
	while (validateCheckmate(board) == 0) {
		system("cls");
		display_board(board);
		validMove = 0;
		if (turn == 2){
			//Get the movement instructions if it is a not valid move, it repeats the code until getting a valid move
			while (validMove == 0) {
				//Sintax for making a move: <x1><y1><x2><y2> o <moveFrom.x><moveFrom.y><moveTo.x><moveTo.y>
				printf("Mueven blancas:\n");
				scanf("%s", move);
				readMoves(turn, moveFrom, moveTo, move, &validMove, board);
			}
			//Change turn to 1
			turn--;
		} else if (turn == 1) {
			//Get the movement instructions if it is a not valid move, it repeats the code until getting a valid move
			while(validMove == 0) {
				//Sintax for making a move: <x1><y1><x2><y2> o <moveFrom.x><moveFrom.y><moveTo.x><moveTo.y>
				printf("Mueven negras:\n");
				scanf("%s", move);
				readMoves(turn, moveFrom, moveTo, move, &validMove, board);
			}
			//Change turn to 0
			turn++;
		}
	}
	show_scores(2);
}
