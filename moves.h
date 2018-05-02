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
    } else if (x >= 48 & x <= 56) {
        return x - 48 - 1;
    } else if (x >= 97 & x <= 104) {
        return x - 97 - 1;
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

int isEmpty (int direction, coordinate moveFrom, coordinate moveTo, piece board[8][8]) {
    //Function to determine if the direction of the piece´s movement is empty
    switch (direction) {
        case 1: //Right
            for (int i = moveFrom.x; i < moveTo.x; i++) {
                if ( board[moveTo.y][i] != 7) {
                    return 0;
                }
            }
            return 1;
            break;
        case 2: //Left
            for (int i = moveFrom.x; i > moveTo.x; i--) {
                if ( board[moveTo.y][i] != 7) {
                    return 0;
                }
            }
            return 1;
            break;
        case 3: //Up
            for (int i = moveFrom.y; i < moveTo.y; i++) {
                if ( board[i][moveFrom.x] != 7) {
                    return 0;
                }
            }
            return 1;
            break;
        case 4: //Down
            for (int i = moveFrom.y; i > moveTo.y; i--) {
                if ( board[i][moveFrom.x] != 7) {
                    return 0;
                }
            }
            return 1;
            break;
        case 5: //Diagonal Right Up
            for (int i = moveFrom.x, j = moveFrom.y; i < moveTo.x && j < moveTo.y; i++, j++ ) {
                if ( board[j][i] != 7 ) {
                    return 0;
                }
            }
            return 1;
            break;
        case 6: //Diagonal Left Up
            for (int i = moveFrom.x, j = moveFrom.y; i > moveTo.x && j < moveTo.y; i--, j++ ) {
                if ( board[j][i] != 7 ) {
                    return 0;
                }
            }
            return 1;
            break;
        case 7: //Diagonal Right Down
            for (int i = moveFrom.x, j = moveFrom.y; i < moveTo.x && j > moveTo.y; i++, j-- ) {
                if ( board[j][i] != 7 ) {
                    return 0;
                }
            }
            return 1;
            break;
        case 8: //Diagonal Left Down
            for (int i = moveFrom.x, j = moveFrom.y; i > moveTo.x && j > moveTo.y; i--, j-- ) {
                if ( board[j][i] != 7 ) {
                    return 0;
                }
            }
            return 1;
            break;
    }
}

int validateMove(coordinate moveFrom, coordinate moveTo, piece board[8][8]){
    //Takes type of piece and depending of it, aplies the corresping moving rules
    //return 1 = Valid move. return 0 = Not valid move
    printf("%d %d\n", moveFrom.x, moveFrom.y);
    printf("%d\n", board[moveFrom.y][moveFrom.x].type);
    switch(board[moveFrom.y][moveFrom.x].type){
        case 1:   //Peon validation
            printf("Is pown\n");
            //Determine which player is the owner
            if (board[moveFrom.y][moveFrom.x].turn == 1) {
                if (moveFrom.y == 1) {
                    if (moveTo.x == moveFrom.x) {
                        if (moveTo.y > 1 && moveTo.y <=3) {
                            if (isEmpty(moveFrom, moveTo, board) == 1) {

                            } else {

                            }
                        }
                    } else {
                        
                    }
                } else {
                    
                }
                return 1;
            } else {
                if (moveFrom.y == 6) {

                    } else {

                    }
            }
            break;
        case 3:   //Horse validation
            printf("Is horse\n");
            if (abs( moveFrom.y - moveTo.y ) == 2) {
                if (abs( moveFrom.x - moveTo.x ) == 1) {
                    return 1;
                } else {
                    return 0;
                }
            } else if ( abs( moveFrom.y - moveTo.y ) == 1 ) {
                if (abs( moveFrom.x - moveTo.x ) == 2) {
                    return 1;
                } else {
                    return 0;
                }
            }
            break;
        case 4:   //Alfil validation
            printf("Is bis\n");
            if (abs(moveTo.x - moveFrom.x) == abs(moveTo.y - moveFrom.y)) {
                return 1;
            } else {
                return 0;
            }
            break;
        case 5:   //Tower validation
            printf("Is tower\n");
            if (moveTo.x != moveFrom.x){
                if (moveTo.y != moveFrom.y) {
                    return 0;
                } else {
                    return 1;
                }
            } else {
                if (moveTo.y != moveFrom.y) {
                    return 1;
                } else {
                    return 0;
                }
            }
            return 1;
            break;
        case 6:   //Queen validation
            printf("Is queen\n");
            return 1;
            break;
        case 7:   //King validation
            printf("Is king\n");
            if (moveTo.x > moveFrom.x - 1 && moveTo.x < moveFrom.x + 1) {
                if (moveTo.y > moveFrom.y - 1 && moveTo.y < moveFrom.y + 1) {
                    return 1;
                } else {
                    return 0;
                }
            } else {
                return 0;
            }
            return 1;
            break;
    }
}

int toMove(int turnPlayer, coordinate moveFrom, coordinate moveTo, piece board[8][8]){
    piece vacio = {0, blank, ' '};
    if (board[moveFrom.y][moveFrom.x].turn == turnPlayer){
        if( validateMove(moveFrom, moveTo, board)  == 1 ) {
            //If it is a valid move continues with following
            if( isInside(moveTo, board) == 1 ){
                //If it is inside, return 1 and make de position change
                if (board[moveTo.y][moveTo.x].turn != board[moveFrom.y][moveFrom.x].turn) {
                    //If the turn´s pieces are different, then they are not owned by the same player
                    board[moveTo.y][moveTo.x] = board[moveFrom.y][moveFrom.x];
                    board[moveFrom.y][moveFrom.x] = vacio;
                    return 1;
                } else {
                    //If turn´s pieces are equal, then they are owned by the same player
                    printf("No puedes comerte tus piezas\n");
                    return 0;
                }
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