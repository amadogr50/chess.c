#include <stdio.h>
#include <stdlib.h>
#include "init.h"
// Opciones
#define new 1
#define scores 2
#define exit 0

int main(void) {
	int init;
    checkInit:
	printf("Type one of the following:\n\t1: To star a new game\n\t2: To show scores\n\t0: To exit game\n");
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
	case exit:
		printf("Thanks for playing");
		break;
	}
	return 0;
}