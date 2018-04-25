typedef struct {
    int x;   
    int y;
} coordinate;

int changeAsciiToDecimal(int x){
    //It substract one more cause it is needed to get the true direccions in the array
    if (x >= 64 & x <= 72 ) { 
        return x - 64 - 1;
    } else{
        return x - 49 - 1;
    }
}

int isInside(coordinate moveTo, piece board[8][8]){
    //Determines if the movement is inside the board
    return 1;
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

int toMove(coordinate moveFrom, coordinate moveTo, piece board[8][8]){
    piece vacio = {0, blank, ' '};
    //Determine if the is valid, if it is,
    printf("Getting inside toMove\n");
    piece pieceToMove = board[moveFrom.x][moveFrom.y];
    if( validateMove(moveFrom, moveTo, pieceToMove.type, board)  == 1 ) {
        printf("Is valid\n");
        if( isInside(moveTo, board) == 1 ){
            printf("Is inside\n");
            //If it is inside, return 1 and make de position change
            board[moveTo.x][moveTo.y] = board[moveFrom.x][moveFrom.y];
            printf("%c", board[moveTo.x][moveTo.y]);
            printf("%c", board[moveFrom.x][moveFrom.y]);
            board[moveFrom.x][moveFrom.y] = vacio;
            return 1;
        } else {
            printf("Is not inside\n");
            //If it is not inside, return 0
            return 0;
        }
    } else {
        printf("Is not valid\n");
        //If it is not a valid move, return 0
        return 0;
    }
}

int validateCheckmate(piece board[8][8]){
    //Determinates if there´s a checkmate
    return 0;
}