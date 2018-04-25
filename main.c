#include <stdio.h>
#include <stdlib.h>

#include "init.h"
#include "instructions.h"
#include "scores.h"

// Opciones
#define new 1
#define scores 2
#define instructions 3
#define exit 0

int main(void) {
	int init;
    checkInit:
	printf("WELCOME TO CHESS PE2018v0.01\n\nType one of the following:\n\t1: To start a new game\n\t2: To show scores\n\t3: To show instructions\n\t0: To exit game\n\n");
	scanf("%d", &init);
	switch (init) {
	case new:
		system("cls");
		printf("New game\n");
		init_game();
		break;
	case scores:
		system("cls");
		printf("Scores");
		//show_scores();
		break;
	case instructions:
		system("cls");
		printf("Instructions");	
		//show_instructions
		break;
	case exit:
		system("cls");
		printf("Thanks for playing");
		break;
	}
	return 0;
}
