#include <stdio.h>
#include <stdlib.h>
#include "init.h"
// Opciones
#define new 1
#define scores 2
#define instructions 3
#define exit 0

int main(void) {
	int init;
    checkInit:
	printf("WELCOME TO CHESS PE2018v0.01\n\nType one of the following:\n\t1: To start a new game\n\t2: To show scores\nt3: To show instructions\n\t0: To exit game\n\n");
	scanf("%d", &init);
	switch (init) {
	case new:
		printf("New game\n");
		//system("cls");
		init_game();
		break;
	case scores:
		printf("Scores");
		//show_scores();
		break;
case instructions:
		printf("Instructions");	
		//show_instructions
		break;
	case exit:
		printf("Thanks for playing");
		break;
	}
	return 0;
}
