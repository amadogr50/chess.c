#include "board.h"
#include "variables-definitions.h"

/*
    CheckMate Validation Explication:
    Con la struct Moves compuesta de struct Position, se crearan tablero donde si se tiene 1 de algun tipo de ficha,
    significa que la ficha en cuestión puede moverse ahí. O sea, es un tablero de posibles movimientos de cada pieza.

    Cada jugador tendrá su propio Moves. Si un rey se encuentra dentro del Moves del enemigo significa, al menos, que
    es check. Si es check se hacen tres cosas, comprobar los posibles movimientos del rey, movimientos de piezas aliadas
    que puedan contraponerse al ataque, comprobar si la pieza que tiene en check al rey puede ser comida por una aliada. 
    Si alguna de estas tres condiciones es verdad, no es checkMate y el juego puede seguir, de lo contrario, es checkMate 
    y el juego terminará ahí.
*/

void calculateMoves (piece board[8][8], coordinate pieceCoor, Moves moves) {
    short turn = board[pieceCoor.y][pieceCoor.x].turn;
    switch (board[pieceCoor.y][pieceCoor.x].type) {
        case peon: //Pawn
            //Determine which player is the owner
            if (turn == white) {
                if (pieceCoor.y == 1) {
                    //Code for the first move
                    //Up
                    for (int i = pieceCoor.y; i < 8; i++) {
                        if ( board[i][pieceCoor.x].type == 7) {
                            moves.position[i][pieceCoor.x].peon == 1;
                        } else {
                            if (board[pieceCoor.y][i].turn == turn) {
                                moves.position[i][pieceCoor.x].peon == 0;
                                break;
                            } else {
                                moves.position[i][pieceCoor.x].peon == 1;
                                break;
                            }
                        }
                    }
                    //Down-Left
                    if (pieceCoor.y < 8 ) {
                        //Determines if the piece is not in the left border
                        if (board[pieceCoor.y + 1][pieceCoor.x + 1].turn != turn) {
                            //It only occurs if there´s an enemy piece in the position
                            moves.position[i][pieceCoor.x].peon == 1;
                        }
                    }
                    //Down-Right
                    if (pieceCoor.y > 0) {
                        //Determines if the piece is not in the right border
                        if (board[pieceCoor.y - 1][pieceCoor.x - 1].turn != turn) {
                            //It only occurs if there´s an enemy piece in the position
                            moves.position[i][pieceCoor.x].peon == 1;
                        }
                    }
                } else {
                    //Code for any other move
                    //Up
                    if (board[pieceCoor.y + 1][pieceCoor.x].type == 7) {
                        //It only happens if the the position is empty
                        moves.position[pieceCoor.y + 1][pieceCoor.x].peon == 1;
                    }
                    //Down-Left
                    if (pieceCoor.y < 8 ) {
                        //Determines if the piece is not in the left border
                        if (board[pieceCoor.y + 1][pieceCoor.x + 1].turn != turn) {
                            //It only occurs if there´s an enemy piece in the position
                            moves.position[pieceCoor.y + 1][pieceCoor.x + 1].peon == 1;
                        }
                    }
                    //Down-Right
                    if (pieceCoor.y > 0) {
                        //Determines if the piece is not in the right border
                        if (board[pieceCoor.y - 1][pieceCoor.x - 1].turn != turn) {
                            //It only occurs if there´s an enemy piece in the position
                            moves.position[pieceCoor.y - 1][pieceCoor.x - 1].peon == 1;
                        }
                    }
                }
                
            } else {

            }
            break;
        case cab: //Horse
            
            break;
        case bis: //Bishop
            
            break;
        case tow: //Tower
            //Right
            for (int i = pieceCoor.x; i < 8; i++) {
                if ( board[pieceCoor.y][i].type == 7) {
                    moves.position[pieceCoor.y][i].tow == 1;
                } else {
                    if (board[pieceCoor.y][i].turn == turn) {
                        moves.position[pieceCoor.y][i].tow == 0;
                        break;
                    } else {
                        moves.position[pieceCoor.y][i].tow == 1;
                        break;
                    }
                }
            }
            //Left
            for (int i = pieceCoor.x; i >= 0; i--) {
                if ( board[pieceCoor.y][i].type == 7) {
                    moves.position[pieceCoor.y][i].tow == 1;
                } else {
                    if (board[pieceCoor.y][i].turn == turn) {
                        moves.position[pieceCoor.y][i].tow == 0;
                        break;
                    } else {
                        moves.position[pieceCoor.y][i].tow == 1;
                        break;
                    }
                }
            }
            //Up
            for (int i = pieceCoor.y; i < 8; i++) {
                if ( board[i][pieceCoor.x].type == 7) {
                    moves.position[i][pieceCoor.x].tow == 1;
                } else {
                    if (board[pieceCoor.y][i].turn == turn) {
                        moves.position[i][pieceCoor.x].tow == 0;
                        break;
                    } else {
                        moves.position[i][pieceCoor.x].tow == 1;
                        break;
                    }
                }
            }
            //Down
            for (int i = pieceCoor.y; i >= 0; i--) {
                if ( board[i][pieceCoor.x].type == 7) {
                    moves.position[i][pieceCoor.x].tow == 1;
                } else {
                    if (board[pieceCoor.y][i].turn == turn) {
                        moves.position[i][pieceCoor.x].tow == 0;
                        break;
                    } else {
                        moves.position[i][pieceCoor.x].tow == 1;
                        break;
                    }
                }
            }
            break;
        case queen: //Queen
            
            break;
        case king: //King
            
            break;
    }
}

Moves updateMoves () {

}

short validateCheckmate(piece board[8][8]){
    //Determinates if there´s a checkmate
    return 0;
}