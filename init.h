#include "board.h"

void init_game() {
	piece board[8][8];
	generate_board(board);
	display_board(board);
}