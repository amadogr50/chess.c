#include "board.h"

#define A 1 
#define B 2
#define C 3
#define D 4
#define E 5 
#define F 6
#define G 7

typedef struct {
    char x;   
    int y;
} coordinate;

int moveTo(coordinate moveFrom, coordinate moveTo, piece board[8][8]){
    //Determine if the is valid, if it is,
    piece pieceToMove = board[from.x][form.y];
    if(validateMove(moveFrom, moveTo, pieceToMove.type, board) == 1){
        if(isInside(moveTo, board) == 1){
            //If it is inside, return 1 and make de position change
            piece aux = board[moveTo.x][moveTo.y];
            board[moveTo.x][moveTo.y] = board[moveFrom.x][moveFrom.y];
            board[moveFrom.x][moveFrom.y] = piece aux;
            return 1;
        } else {
            //If it is not inside, return 0
            return 0;
        }
    } else {
        //If it is not a valid move, return 0
        return 0;
    }
}

int isInside(coordinate moveTo, piece board[8][8]){
    //Determines if the movement is inside the board


}

int validateMove(coordinate moveFrom, coordinate moveTo, int type, piece board[8][8]){
    //Takes type of piece and depending of it, aplies the corresping moving rules
    //return 1 = Valid move. return 0 = Not valid move
    switch(type){
        case peon:  //Peon validation
            break;
        case cab:   //Horse validation
            break;
        case bis:   //Alfil validation
            break;
        case tow:   //Tower validation
            break;
        case queen: //Queen validation
            break;
        case king:  //King validation
            break;
    }
}

int validateCheckmate(piece board[8][8]){
    //Determinates if there´s a checkmate
    return 0;
}