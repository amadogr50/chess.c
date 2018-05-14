
//Main Function

#include <stdio.h>
#include <stdlib.h>
#include "init.h"
#include "instructions.h"
#include "scores.h"
#include "welcome.h"

// Opciones
#define new 1
#define scores 2
#define instructions 3
#define rankings 4
#define exit 0

int main(void) {
	int init;
	system("cls");
	short ascii_art = generate_opcion();
	welcome_screen(ascii_art);
	printf("WELCOME TO CHESS PE2018v1.0\n");
	printf("\nType one of the following:\n\t1: To start a new game\n\t2: To show the scoreboard\n\t3: To show the instructions\n\t4: To show the elo rankings\n\t0: To exit the game\n");
	scanf("%d", &init);
	switch (init) {
		case new:
			system("cls");
			printf("New game\n");
			init_game(ascii_art);
			break;
		case scores:
			system("cls");
			printf("Scores\n");
			show_scores(1);
			break;
		case instructions:
			system("cls");
			printf("Instructions\n");
			show_instructions();
			break;
		case rankings:
			system("cls");
			printf("\n1000-1399 = Principiante");
			printf("\n1400-1599 = Aficionado");
			printf("\n1600-1799 = Jugador de club medio");
			printf("\n1800-1999 = Jugador de club fuerte");
			printf("\n2000-2199 = Experto Nacional");
			printf("\n2200-2299 = Candidato a maestro");
			printf("\n2300-2399 = Maestro Federacion Internacional de Ajedrez");
			printf("\n2400-2499 = Maestro Internacional");
			printf("\n2500-2599 = Gran Maestro");
			printf("\n2600-2699 = Super Gran Maestro");
			printf("\n2700-2799 = Candidato a Campeon del mundo");
			printf("\n+2800 = Campeon del mundo");
			break;
		case exit:
			system("cls");
			printf("Thanks for playing\n");
			break;
	}
	return 0;
}

