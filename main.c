#include <stdio.h>

//Opciones
#define new 1
#define scores 2
#define exit 0
/*
//Jugadores
#define white 0;
#define black 1;
//Fichas
#define p 1; //Peon
#define c 2; //Caballo
#define b 3; //Alfil
#define t 4; //Torre
#define q 5; //Reina
#define k 6; //Rey

//Variable global para el tablero
board[8][8];

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
    printf("   a   b   c   d   e   f   g   h \n");
    for (i = 0; i < 8; i++){
        printf("%d -", i);
        for(j = 0; j < 8; j++){
            if (board[i][j] != 0){
                printf(" %c ", board[i][j].graph);
            } else {
                printf(" - ");
            }
        }
        printf("\n");
    }
}

void generate_board(){
    piece p1 = { 1 , p };
    piece p2 = { 1 , p };
    piece p3 = { 1 , p };
    piece p4 = { 1 , p };
    piece p5 = { 1 , p };
    piece p6 = { 1 , p };
    piece p7 = { 1 , p };
    piece p8 = { 1 , p };
    piece c1 = { 1 , c };
    piece c2 = { 1 , c };
    piece b1 = { 1 , b };
    piece b2 = { 1 , b };
    piece t1 = { 1 , t };
    piece t2 = { 1 , t };
    piece queen = { 1 , q };
    piece king = { 1 , k };
    piece P1 = { 2 , p} ;
    piece P2 = { 2 , p} ;
    piece P3 = { 2 , p} ;
    piece P4 = { 2 , p} ;
    piece P5 = { 2 , p} ;
    piece P6 = { 2 , p} ;
    piece P7 = { 2 , p} ;
    piece P8 = { 2 , p} ;
    piece C1 = { 2 , c };
    piece C2 = { 2 , c };
    piece B1 = { 2 , b };
    piece B2 = { 2 , b };
    piece T1 = { 2 , t };
    piece T2 = { 2 , t };
    piece QUEEN = { 2 , q };
    piece KING = { 2 , k };

    board = [
        [ t1, c1 , b1 , king , queen , b2 , c2 , t2 ],
        [ p1, p2 , p3 , p4 , p5 , p6 , p7 , p8 ],
        [ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ],
        [ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ],
        [ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ],
        [ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ],
        [ P1, P2 , P3 , P4 , P5 , P6 , P7 , P8 ],
        [ T1, C1 , B1 , KING , QUEEN , B2 , C2 , T2 ],
    ]
}
*/

void init_game(){
    //generate_board();
    /*while(checkmate == 0){
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
    */
}

int main(void) {
    int init;
    printf("Opciones: \n\t1 - Inicar Nuevo Juego\n\t2 - Mostrar scores\n\t0 - Salir\n");
    checkInit:
    scanf("%d", &init);
    switch(init){
        case 1:
            init_game();
            break;
        case 2:
            //show_scores();
            break;
        case 0:
            //exit();
            break;
        default:
            printf("Invalid input, try again: ");
            goto checkInit;
    }
    return 0;
}