#ifndef DEFS_H_INCLUDED
#define DEFS_H_INCLUDED

typedef struct {
    int x;   
    int y;
} coordinate;

typedef struct {
    struct {
        short peon;
        short cab;
        short bis;
        short tow;
        short queen;
        short king;
    } position[8][8];
} Moves;

typedef struct {
	int turn;
	int type;
	char graph;
} piece;

// Jugadores
#define blakc 1
#define white 2
// Fichas
#define peon 1 	 // Peon
#define cab 2 	 // Caballo
#define bis 3 	 // Alfil
#define tow 4 	 // Torre
#define queen 5	 // Reina
#define king 6	 // Rey
#define blank 7  //Blank space

#endif // DEFS_H_INCLUDED