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
#define BLACK 1
#define WHITE 2
// Fichas
#define PAWN 1 	    // Peon
#define HORSE 2     // Caballo
#define BISHOP 3 	// Alfil
#define TOWER 4 	// Torre
#define QUEEN 5	    // Reina
#define KING 6	    // Rey
#define BLANK 7     //Blank space

#endif // DEFS_H_INCLUDED