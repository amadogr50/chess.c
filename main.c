#include <stdio.h>
#include <stdlib.h>

// Opciones
#define new 1
#define scores 2
#define exit 0
// Jugadores
#define white 1
#define black 2
// Fichas
#define peon 1 // Peon
#define cab 2 // Caballo
#define bis 3 // Alfil
#define tow 4 // Torre
#define queen 5 // Reina
#define king 6 // Rey

// Variable global para el tablero
typedef struct {
	int turn;
	int type;
	char graph;
}piece;

void display_board(piece board[8][8]) {
}



void generate_board(piece board[8][8]) {
	piece b_p1 = {1, peon, 'p'};
	piece b_p2 = {1, peon, 'p'};
	piece b_p3 = {1, peon, 'p'};
	piece b_p4 = {1, peon, 'p'};
	piece b_p5 = {1, peon, 'p'};
	piece b_p6 = {1, peon, 'p'};
	piece b_p7 = {1, peon, 'p'};
	piece b_p8 = {1, peon, 'p'};
	piece b_c1 = {1, cab, 'c'};
	piece b_c2 = {1, cab, 'c'};
	piece b_b1 = {1, bis, 'b'};
	piece b_b2 = {1, bis, 'b'};
	piece b_t1 = {1, tow, 't'};
	piece b_t2 = {1, tow, 't'};
	piece b_queen = {1, queen, 'q'};
	piece b_king = {1, king, 'k'};
	piece w_p1 = {2, peon, 'P'};
	piece w_p2 = {2, peon, 'P'};
	piece w_p3 = {2, peon, 'P'};
	piece w_p4 = {2, peon, 'P'};
	piece w_p5 = {2, peon, 'P'};
	piece w_p6 = {2, peon, 'P'};
	piece w_p7 = {2, peon, 'P'};
	piece w_p8 = {2, peon, 'P'};
	piece w_c1 = {2, cab, 'C'};
	piece w_c2 = {2, cab, 'C'};
	piece w_b1 = {2, bis, 'B'};
	piece w_b2 = {2, bis, 'B'};
	piece w_t1 = {2, tow, 'T'};
	piece w_t2 = {2, tow, 'T'};
	piece w_QUEEN = {2, queen, 'Q'};
	piece w_KING = {2, king, 'K'};
}

void init_game() {
	piece board[8][8];
	generate_board(board);
	display_board(board);
}

int main(void) {
	int init;
    checkInit:
	printf("Type one of the following:\n\t1: To star a new game\n\t2: To show scores\n\t0: To exit game\n");
	scanf("%d", &init);
	switch (init) {
	case new:
		printf("New game");
		system("cls");
		init_game();
		break;
	case scores:
		printf("Scores");
		//show_scores();
		break;
	case exit:
		printf("Thanks for playing");
		break;
	}
	return 0;
}