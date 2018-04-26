/*
    Library for managing all releated to the movement of pieces in the board.
*/

typedef struct {
    int x;   
    int y;
} coordinate;

int changeAsciiToDecimal(int x){
    //It substract one more cause it is needed to get the true direccions in the array
    if (x >= 64 & x <= 72 ) { 
        return x - 64 - 1;
    } else{
        return x - 48 - 1;
    }
}

int isInside(coordinate moveTo, piece board[8][8]){
    //Determines if the movement is inside the board
    if (moveTo.y > 7 | moveTo.x > 8){
        return 0;
    } else {
        return 1;
    }
}

int validateMove(coordinate moveFrom, coordinate moveTo, int type, piece board[8][8]){
    //Takes type of piece and depending of it, aplies the corresping moving rules
    //return 1 = Valid move. return 0 = Not valid move
    return 1;
    switch(type){
        case peon:  //Peon validation
            printf("Is pown");
            return 1;
            break;
        case cab:   //Horse validation
            printf("Is horse");
            return 1;
            break;
        case bis:   //Alfil validation
            printf("Is bis");
            return 1;
            break;
        case tow:   //Tower validation
            printf("Is tower");
            return 1;
            break;
        case queen: //Queen validation
            printf("Is queen");
            return 1;
            break;
        case king:  //King validation
            printf("Is king");
            return 1;
            break;
    }
}

int toMove(int turnPlayer, coordinate moveFrom, coordinate moveTo, piece board[8][8]){
    piece vacio = {0, blank, ' '};
    if (board[moveFrom.y][moveFrom.x].turn == turnPlayer){
        if( validateMove(moveFrom, moveTo, board[moveFrom.x][moveFrom.y].type, board)  == 1 ) {
            //If it is a valid move continues with following
            if( isInside(moveTo, board) == 1 ){
                //If it is inside, return 1 and make de position change
                board[moveTo.y][moveTo.x] = board[moveFrom.y][moveFrom.x];
                board[moveFrom.y][moveFrom.x] = vacio;
                return 1;
            } else {
                //If it is not inside, return 0
                printf("Movimiento fuera del tablero\n");
                return 0;
            }
        } else {
            //If it is not a valid move, return 0
            printf("Movimiento invalido\n");
            return 0;
        }
    } else {
        //If the player is not owner of the piece, return 0
        printf("Esa pieza no es tuya\n");
        return 0;
    }
        
}

int validateCheckmate(piece board[8][8]){
    //Determinates if there´s a checkmate
    return 0;
}