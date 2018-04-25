#include <stdio.h>

// Jugadores
#define white 1
#define black 2
// Fichas
#define peon 1 	 // Peon
#define cab 2 	 // Caballo
#define bis 3 	 // Alfil
#define tow 4 	 // Torre
#define queen 5	 // Reina
#define king 6	 // Rey
#define blank 7  //Blank space

// Variable global para el tablero
typedef struct {
	int turn;
	int type;
	char graph;
} piece;

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
	piece w_queen = {2, queen, 'Q'};
	piece w_king = {2, king, 'K'};
	piece vacio = {0, blank, ' '};

	board[0][0] = w_t1;
	board[0][1] = w_c1;
	board[0][2] = w_b1;
	board[0][3] = w_king;
	board[0][4] = w_queen;
	board[0][5] = w_b2;
	board[0][6] = w_c2;
	board[0][7] = w_t2;

	board[1][0] = w_p1;
	board[1][1] = w_p2;
	board[1][2] = w_p3;
	board[1][3] = w_p4;
	board[1][4] = w_p5;
	board[1][5] = w_p6;
	board[1][6] = w_p7;
	board[1][7] = w_p8;
	
	board[2][0] = vacio;
	board[2][1] = vacio;
	board[2][2] = vacio;
	board[2][3] = vacio;
	board[2][4] = vacio;
	board[2][5] = vacio;
	board[2][6] = vacio;
	board[2][7] = vacio;
	
	board[3][0] = vacio;
	board[3][1] = vacio;
	board[3][2] = vacio;
	board[3][3] = vacio;
	board[3][4] = vacio;
	board[3][5] = vacio;
	board[3][6] = vacio;
	board[3][7] = vacio;

	board[4][0] = vacio;
	board[4][1] = vacio;
	board[4][2] = vacio;
	board[4][3] = vacio;
	board[4][4] = vacio;
	board[4][5] = vacio;
	board[4][6] = vacio;
	board[4][7] = vacio;

	board[4][0] = vacio;
	board[4][1] = vacio;
	board[4][2] = vacio;
	board[4][3] = vacio;
	board[4][4] = vacio;
	board[4][5] = vacio;
	board[4][6] = vacio;
	board[4][7] = vacio;

	board[5][0] = vacio;
	board[5][1] = vacio;
	board[5][2] = vacio;
	board[5][3] = vacio;
	board[5][4] = vacio;
	board[5][5] = vacio;
	board[5][6] = vacio;
	board[5][7] = vacio;
	
	board[6][0] = b_p1;
	board[6][1] = b_p2;
	board[6][2] = b_p3;
	board[6][3] = b_p4;
	board[6][4] = b_p5;
	board[6][5] = b_p6;
	board[6][6] = b_p7;
	board[6][7] = b_p8;
	
	board[7][0] = b_t1;
	board[7][1] = b_c1;
	board[7][2] = b_b1;
	board[7][3] = b_king;
	board[7][4] = b_queen;
	board[7][5] = b_b2;
	board[7][6] = b_c2;
	board[7][7] = b_t2;
}

void display_board(piece board[8][8]) {
	printf("   A B C D E F G H\n");
	for (int x = 0; x < 8; x++) {
		printf("%d ", x+1);
		for (int y = 0; y < 8; y++) {
			printf("|%c", board[x][y].graph);
		}
		printf("|\n");
	}
}