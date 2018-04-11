#include <stdio.h>

#define new 1;
#define scores 2;
#define exit 0;
#define white 0;
#define black 1;
#define p 1; //Peon
#define c 2; //Caballo
#define b 3; //Alfil
#define t 4; //Torre
#define q 5; //Reina
#define k 6; //Rey

board = [][];

typedef struct{
    int turn;
    int type;
    switch(type){
        case(p):
        if(turn == white){
            char graph = 'p'
        } else {
            char graph = 'P'
        }
            break;
       case(C):
        if(turn == white){
            char graph = 'c'
        } else {
            char graph = 'C'
        }
            break;
        case(b):
        if(turn == white){
            char graph = 'b'
        } else {
            char graph = 'B'
        }
            break;
        case(t):
        if(turn == white){
            char graph = 't'
        } else {
            char graph = 'T'
        }
            break;
        case(q):
        if(turn == white){
            char graph = 'q'
        } else {
            char graph = 'Q'
        }
            break;
        case(k):
        if(turn == white){
            char graph = 'k'
        } else {
            char graph = 'K'
        }
            break;
    }
} piece;

void display_board(board){
    for (i = 0; i < 8; i++){
        for(x = 0; x < 8; x++){
            
        }
    }
}
void init_game(){
    int checkmate = 0;
    int turn = 0;
    generate_board();
    while(checkmate == 0){
        char move[5];
        movement:
        scanf("move: %c", &move);
        if( validate_move() == 1){
            move();
            check_checkmate();
            display_board();
            finish_turn();
        } else {
            printf("Invalid move");
            goto movement;
        }
    }
}

void generate_board(){
    board = [
        [ ],
        [ ],
        [ ],
        [ ],
        [ ],
        [ ],
        [ ],
        [ ]
    ]
}

int main(void) {
    char init;
    checkInit:
    scanf("/s", &init);
    switch(init){
        case new:
            init_game();
            break;
        case scores:
            show_scores();
            break;
        case exit:}
            exit();
            break;
        default 
            printf("Invalid input");
            goto checkInit;
    }
    return 0;
}