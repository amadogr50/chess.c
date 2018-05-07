/*
    Library for managing all releated to the movement of pieces in the board.
*/

#include "defs.h"

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

int isEmpty (coordinate moveFrom, coordinate moveTo, piece board[8][8]) {
    //Function to determine if the direction of the piece´s movement is empty
    int right, left, up, down, direction;

    if (right){
        if (up) {
            direction = 5;
        } else if (down) {
            direction = 7;
        } else {
            direction = 1;
        }
    } else if (left) {
        if (up) {
            direction = 6;
        } else if (down) {
            direction = 8;
        } else {
            direction = 2;
        }
    } else {
        if (up) {
            direction = 3;
        } else if (down) {
            direction = 4;
        }
    }

    switch (direction) {
        case 1: //Right
            for (int i = moveFrom.x; i < moveTo.x; i++) {
                if ( board[moveTo.y][i].type != 7) {
                    return 0;
                }
            }
            return 1;
            break;
        case 2: //Left
            for (int i = moveFrom.x; i > moveTo.x; i--) {
                if ( board[moveTo.y][i].type != 7) {
                    return 0;
                }
            }
            return 1;
            break;
        case 3: //Up
            for (int i = moveFrom.y; i < moveTo.y; i++) {
                if ( board[i][moveFrom.x].type != 7) {
                    return 0;
                }
            }
            return 1;
            break;
        case 4: //Down
            for (int i = moveFrom.y; i > moveTo.y; i--) {
                if ( board[i][moveFrom.x].type != 7) {
                    return 0;
                }
            }
            return 1;
            break;
        case 5: //Diagonal Right Up
            for (int i = moveFrom.x, j = moveFrom.y; i < moveTo.x && j < moveTo.y; i++, j++ ) {
                if ( board[j][i].type != 7 ) {
                    return 0;
                }
            }
            return 1;
            break;
        case 6: //Diagonal Left Up
            for (int i = moveFrom.x, j = moveFrom.y; i > moveTo.x && j < moveTo.y; i--, j++ ) {
                if ( board[j][i].type != 7 ) {
                    return 0;
                }
            }
            return 1;
            break;
        case 7: //Diagonal Right Down
            for (int i = moveFrom.x, j = moveFrom.y; i < moveTo.x && j > moveTo.y; i++, j-- ) {
                if ( board[j][i].type != 7 ) {
                    return 0;
                }
            }
            return 1;
            break;
        case 8: //Diagonal Left Down
            for (int i = moveFrom.x, j = moveFrom.y; i > moveTo.x && j > moveTo.y; i--, j-- ) {
                if ( board[j][i].type != 7 ) {
                    return 0;
                }
            }
            return 1;
            break;
    }
}

char pieceGraph ( int type , int turn) {
    switch (type) {
        case 1:
            return (turn == 1) ? 'p' : 'P';
            break;
        case 2:
            return (turn == 1) ? 'c' : 'C';
            break;
        case 3:
            return (turn == 1) ? 'b' : 'B';
            break;
        case 4:
            return (turn == 1) ? 't' : 'T';
            break;
        case 5:
            return (turn == 1) ? 'q' : 'Q';
            break;
        case 6:
            return (turn == 1) ? 'k' : 'K';
            break;
    }
}

int pawnPromotion () {
    int promotion;
    printf("Escoge tu promocion:\n1: Peon\n2: Caballo\n3: Alfil\n4: Torre\n5: Reina\n");
    scanf("%d", &promotion);
    return promotion;
}

int validateMove(coordinate moveFrom, coordinate moveTo, piece board[8][8]){
    //Takes type of piece and depending of it, aplies the corresping moving rules
    //return 1 = Valid move. return 0 = Not valid move
    printf("%d\n", board[moveFrom.y][moveFrom.x].type);
    switch(board[moveFrom.y][moveFrom.x].type){
        case 1:   //Pawn validation
            //Determine which player is the owner
            if (board[moveFrom.y][moveFrom.x].turn == 1) {
                if (moveFrom.y == 6) {
                    //Code for the first move
                    if (abs(moveFrom.y - moveTo.y) == 2) {
                        //The move is valid if the Δy is 2
                         if (board[moveTo.y][moveTo.x].type == 7) {
                                //It´s a valid move if there´s nothing in the space to move
                                return 1;
                            } else {
                                //It´s not a valid move if there´s something in the space to move
                                return 0;
                            }
                    } else if (abs(moveTo.y - moveFrom.y) == 1) {
                        //The move is valid if the Δy is 1
                        if (moveFrom.x == moveTo.x) {
                            //It´s valid if there´s not movement in x
                            if (board[moveTo.y][moveTo.x].type == 7) {
                                //It´s a valid move if there´s nothing in the space to move
                                return 1;
                            } else {
                                //It´s not a valid move if there´s something in the space to move
                                return 0;
                            }
                        } else if (abs(moveFrom.x - moveTo.x) == 1) {
                            //It´s valid if Δx is 1
                            if (board[moveTo.y][moveTo.x].type != 7) {
                                //It´s a valid move if there´s something in the space to move
                                return 1;
                            } else {
                                //It´s not a valid move if there´s something in the space to move
                                return 0;
                            }
                        } else {
                            //It´s not a valid move if the Δx is outside [1,1]
                            return 0;
                        }
                    } else {
                        //The move is not valid if the Δy is different to 1
                        return 0;
                    }
                } else {
                    //Code for any other move
                    if (abs(moveTo.y - moveFrom.y) == 1) {
                        //The move is valid if the Δy is 1
                        if (moveFrom.x == moveTo.x) {
                            //It´s valid if there´s not movement in x
                            if (board[moveTo.y][moveTo.x].type == 7) {
                                //It´s a valid move if there´s nothing in the space to move
                                if (moveTo.y == 0) {
                                    //Code for a pawn promotion
                                    return 3;
                                }
                                return 1;
                            } else {
                                //It´s not a valid move if there´s something in the space to move
                                return 0;
                            }
                        } else if (abs(moveFrom.x - moveTo.x) == 1) {
                            //It´s valid if Δx is 1
                            if (board[moveTo.y][moveTo.x].type != 7) {
                                //It´s a valid move if there´s something in the space to move
                                if (moveTo.y == 0) {
                                    //Code for a pawn promotion
                                    return 3;
                                }
                                return 1;
                            } else {
                                //It´s not a valid move if there´s something in the space to move
                                return 0;
                            }
                        } else {
                            //It´s not a valid move if the Δx is outside [1,1]
                            return 0;
                        }
                    } else {
                        //The move is not valid if the Δy is different to 1
                        return 0;
                    }
                }
            } else {
                if (moveFrom.y == 1) {
                    //Code for the first move
                    if (abs(moveFrom.y - moveTo.y) == 2) {
                        //The move is valid if the Δy is 2
                         if (board[moveTo.y][moveTo.x].type == 7) {
                                //It´s a valid move if there´s nothing in the space to move
                                return 1;
                            } else {
                                //It´s not a valid move if there´s something in the space to move
                                return 0;
                            }
                    } else if (abs(moveTo.y - moveFrom.y) == 1) {
                        //The move is valid if the Δy is 1
                        if (moveFrom.x == moveTo.x) {
                            //It´s valid if there´s not movement in x
                            if (board[moveTo.y][moveTo.x].type == 7) {
                                //It´s a valid move if there´s nothing in the space to move
                                return 1;
                            } else {
                                //It´s not a valid move if there´s something in the space to move
                                return 0;
                            }
                        } else if (abs(moveFrom.x - moveTo.x) == 1) {
                            //It´s valid if Δx is 1
                            if (board[moveTo.y][moveTo.x].type != 7) {
                                //It´s a valid move if there´s something in the space to move
                                return 1;
                            } else {
                                //It´s not a valid move if there´s something in the space to move
                                return 0;
                            }
                        } else {
                            //It´s not a valid move if the Δx is outside [1,1]
                            return 0;
                        }
                    } else {
                        //The move is not valid if the Δy is different to 1
                        return 0;
                    }
                } else {
                    //Code for any other move
                    if (abs(moveTo.y - moveFrom.y) == 1) {
                        //The move is valid if the Δy is 1
                        if (moveFrom.x == moveTo.x) {
                            //It´s valid if there´s not movement in x
                            if (board[moveTo.y][moveTo.x].type == 7) {
                                //It´s a valid move if there´s nothing in the space to move
                                if (moveTo.y == 7) {
                                    //Code for a pawn promotion
                                    return 3;
                                }
                                return 1;
                            } else {
                                //It´s not a valid move if there´s something in the space to move
                                return 0;
                            }
                        } else if (abs(moveFrom.x - moveTo.x) == 1) {
                            //It´s valid if Δx is 1
                            if (board[moveTo.y][moveTo.x].type != 7) {
                                //It´s a valid move if there´s something in the space to move
                                if (moveTo.y == 7) {
                                    //Code for a pawn promotion
                                    return 3;
                                }
                                return 1;
                            } else {
                                //It´s not a valid move if there´s something in the space to move
                                return 0;
                            }
                        } else {
                            //It´s not a valid move if the Δx is outside [1,1]
                            return 0;
                        }
                    } else {
                        //The move is not valid if the Δy is different to 1
                        return 0;
                    }
                }
            }
            break;
        case 2:   //Horse validation
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
        case 3:   //Bishop validation
            if (abs(moveTo.x - moveFrom.x) == abs(moveTo.y - moveFrom.y)) {
                if (isEmpty(moveFrom, moveTo, board) == 1) {
                    return 1;
                } else {
                    return 0;
                }
            } else {
                return 0;
            }
            break;
        case 4:   //Tower validation
            if (moveTo.x != moveFrom.x){
                if (moveTo.y != moveFrom.y) {
                    return 0;
                } else {
                    if (isEmpty(moveFrom, moveTo, board) == 1) {
                        return 1;
                    } else {
                        return 0;
                    }
                }
            } else {
                if (moveTo.y != moveFrom.y) {
                    if (isEmpty(moveFrom, moveTo, board) == 1) {
                        return 1;
                    } else {
                        return 0;
                    }
                } else {
                    return 0;
                }
            }
            break;
        case 5:   //Queen validation
            if (abs(moveTo.x - moveFrom.x) == abs(moveTo.y - moveFrom.y)) {
                if (isEmpty(moveFrom, moveTo, board) == 1) {
                    return 1;
                } else {
                    return 0;
                }
            } else {
                if (moveTo.x != moveFrom.x){
                    if (moveTo.y != moveFrom.y) {
                        return 0;
                    } else {
                        if (isEmpty(moveFrom, moveTo, board) == 1) {
                            return 1;
                        } else {
                            return 0;
                        }
                    }
                } else {
                    if (moveTo.y != moveFrom.y) {
                        if (isEmpty(moveFrom, moveTo, board) == 1) {
                            return 1;
                        } else {
                            return 0;
                        }
                    } else {
                        return 0;
                    }
                }
            }
            break;
        case 6:   //King validation
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

int toMove( int turnPlayer, coordinate moveFrom, coordinate moveTo, piece board[8][8] ){
    piece vacio = {0, blank, ' '};
    if ( board[moveFrom.y][moveFrom.x].turn == turnPlayer ) {
        //Conditional for valid move response
        switch ( validateMove(moveFrom, moveTo, board) ) {
            case 0: //Invalid move
                //If it is not a valid move, return 0
                printf("Movimiento invalido\n");
                return 0;
                break;
            case 1: //If it is a valid move continues with following
                if( isInside(moveTo, board) == 1 ) {
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
                break;
            case 2: //Pawn promotion
                if( isInside(moveTo, board) == 1 ) {
                    //If it is inside, return 1 and make de position change
                    if (board[moveTo.y][moveTo.x].turn != board[moveFrom.y][moveFrom.x].turn) {
                        //If the turn´s pieces are different, then they are not owned by the same player
                        board[moveTo.y][moveTo.x] = board[moveFrom.y][moveFrom.x];
                        board[moveTo.y][moveTo.x].type = pawnPromotion();
                        board[moveTo.y][moveTo.x].graph = pieceGraph(board[moveTo.y][moveTo.x].type, turnPlayer);
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
                break;
        }
    } else {
        //If the player is not owner of the piece, return 0
        printf("Esa pieza no es tuya\n");
        return 0;
    }
        
}

