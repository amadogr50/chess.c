#include "stdio.h"
#include "string.h"

// Opciones
#define new 1;
#define scores 2;
#define exit 0;
// Jugadores
#define white 1;
#define black 2;
// Fichas
#define peon 1; // Peon
#define cab 2; // Caballo
#define bis 3; // Alfil
#define tow 4; // Torre
#define queen 5; // Reina
#define king 6; // Rey

// Variable global para el tablero
piece board[8][8];
typedef struct {
	int turn;
	int type;
	char graph;
}piece;

void init_game() {
	//int checkmate = 0;
	//int turn = 0;
	//generate_board();
	//while (checkmate == 0) {
	//	char move[5];
	//movement:
	//	scanf("move: %c", &move);
	//	if (validate_move() == 1) {
	//		move();
	//		check_checkmate();
	//		display_board();
	//		finish_turn();
	//	} else {
	//		printf("Invalid move");
	//		goto movement;
	//	}
	//}
}

void display_board(board) {

}



void generate_board() {
	piece b_p1 = {1, peon, 'p'};
	//piece b_p2 = {1, peon, 'p'};
	//piece b_p3 = {1, peon, 'p'};
	//piece b_p4 = {1, peon, 'p'};
	//piece b_p5 = {1, peon, 'p'};
	//piece b_p6 = {1, peon, 'p'};
	//piece b_p7 = {1, peon, 'p'};
	//piece b_p8 = {1, peon, 'p'};
	//piece b_c1 = {1, cab, 'c'};
	//piece b_c2 = {1, cab, 'c'};
	//piece b_b1 = {1, bis, 'b'};
	//piece b_b2 = {1, bis, 'b'};
	//piece b_t1 = {1, tow, 't'};
	//piece b_t2 = {1, tow, 't'};
	//piece b_queen = {1, queen, 'q'};
	//piece b_king = {1, king, 'k'};
	//piece w_P1 = {2, peon, 'P'};
	//piece w_P2 = {2, peon, 'P'};
	//piece w_P3 = {2, peon, 'P'};
	//piece w_P4 = {2, peon, 'P'};
	//piece w_P5 = {2, peon, 'P'};
	//piece w_P6 = {2, peon, 'P'};
	//piece w_P7 = {2, peon, 'P'};
	//piece w_P8 = {2, peon, 'P'};
	//piece w_C1 = {2, cab, 'C'};
	//piece w_C2 = {2, cab, 'C'};
	//piece w_B1 = {2, bis, 'B'};
	//piece w_B2 = {2, bis, 'B'};
	//piece w_T1 = {2, tow, 'T'};
	//piece w_T2 = {2, tow, 'T'};
	//piece w_QUEEN = {2, queen, 'Q'};
	//piece w_KING = {2, king, 'K'};
}

int main(void) {
	//char init;
    //checkInit:
	//scanf("/s", &init);
	//switch (init) {
	//case new:
	//	init_game();
	//	break;
	//case scores:
	//	show_scores();
	//	break;
	//case exit:
	//}
	//return 0;
}