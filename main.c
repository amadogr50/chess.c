/*
	Main Function
*/
#include <stdio.h>
#include <stdlib.h>
#include "init.h"
#include "instructions.h"
#include "scores.h"
#include "mutli.h"

// Opciones
#define new 1
#define multiplayer 2
#define scores 3
#define instructions 4
#define exit 0

int main(void) {
	int init;
    checkInit:
	printf("WELCOME TO CHESS PE2018v0.01\n
				\nType one of the following:\n
				\t1: To start a new game\n
				\t2: To start a multiplayer game\n
				\t3: To show the scoreboard\n
				\t4: To show the instructions\n
				\t0: To exit the game\n");
	scanf("%d", &init);
	switch (init) {
	case new:
		system("cls");
		printf("New game\n");
		init_game();
		break;
	case multiplayer:
		system("cls");
		printf("Multiplayer\n");
		init_multi();
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
	case exit:
		system("cls");
		printf("Thanks for playing\n");
		break;
	}
	return 0;
}
