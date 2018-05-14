
//Main Function

#include <stdio.h>
#include <stdlib.h>
#include "init.h"
#include "instructions.h"
#include "scores.h"
#include "math.h"
#include "time.h"

// Opciones
#define new 1
#define scores 2
#define instructions 3
#define rankings 4
#define exit 0

void welcome_screen();

int main(void) {
	int init;
    checkInit:
		welcome_screen();
		system("pause");
		system("cls");
	printf("WELCOME TO CHESS PE2018v1.0\n\nType one of the following:\n\t1: To start a new game\n\t2: To show the scoreboard\n\t3: To show the instructions\n\t4: To show the elo rankings\n\t0: To exit the game\n");
	scanf("%d", &init);
	switch (init) {
	case new:
		system("cls");
		printf("New game\n");
		init_game();
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

void welcome_screen()
{
	srand(time(NULL));
	int r = rand() % 4;

switch (r)
{
case 0: printf("	Art by Babak Habibi                                                               \n");
				printf("                                         \n");
				printf("                                     o     \n");
				printf("                                    $**$o     \n");
				printf("                                   $*  $$     \n");
				printf("                                    $$$$     \n");
				printf("                                    o *$o     \n");
				printf("                                   o*  *$     \n");
				printf("              oo*$$$*  oo$*$ooo   o$    *$    ooo*$oo  $$$*o     \n");
				printf(" o o o o    oo*  o*      *o    $$o$*     o o$**  o$      *$  *oo   o o o o     \n");
				printf(" *$o   **$$$*   $$         $      *   o   **    o*         $   *o$$*    o$$     \n");
				printf("   **o       o  $          $*       $$$$$       o          $  ooo     o**     \n");
				printf("      *o   $$$$o $o       o$        $$$$$*       $o        * $$$$   o*     \n");
				printf("       **o $$$$o  oo o  o$*         $$$$$*        *o o o o*  *$$$  $     \n");
				printf("         ** *$*     *****            **$*            ***      *** *     \n");
				printf("          *oooooooooooooooooooooooooooooooooooooooooooooooooooooo$     \n");
				printf("           *$$$$*$$$$* $$$$$$$*$$$$$$ * *$$$$$*$$$$$$*  $$$**$$$$     \n");
				printf("            $$$oo$$$$   $$$$$$o$$$$$$o* $$$$$$$$$$$$$$ o$$$$o$$$*     \n");
				printf("            $***************************************************$     \n");
				printf("            $*                                                 *$     \n");
				printf("            $*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$     \n");
				break;

case 1:	printf("	Art by Babak Habibi                                                               \n");
				printf("                                         \n");
				printf("                                     o     \n");
				printf("                                    $**$o     \n");
				printf("                                   $*  $$     \n");
				printf("                                    $$$$     \n");
				printf("                                    o *$o     \n");
				printf("                                   o*  *$     \n");
				printf("              oo*$$$*  oo$*$ooo   o$    *$    ooo*$oo  $$$*o     \n");
				printf(" o o o o    oo*  o*      *o    $$o$*     o o$**  o$      *$  *oo   o o o o     \n");
				printf(" *$o   **$$$*   $$         $      *   o   **    o*         $   *o$$*    o$$     \n");
				printf("   **o       o  $          $*       $$$$$       o          $  ooo     o**     \n");
				printf("      *o   $$$$o $o       o$        $$$$$*       $o        * $$$$   o*     \n");
				printf("       **o $$$$o  oo o  o$*         $$$$$*        *o o o o*  *$$$  $     \n");
				printf("         ** *$*     *****            **$*            ***      *** *     \n");
				printf("          *oooooooooooooooooooooooooooooooooooooooooooooooooooooo$     \n");
				printf("           *$$$$*$$$$* $$$$$$$*$$$$$$ * *$$$$$*$$$$$$*  $$$**$$$$     \n");
				printf("            $$$oo$$$$   $$$$$$o$$$$$$o* $$$$$$$$$$$$$$ o$$$$o$$$*     \n");
				printf("            $***************************************************$     \n");
				printf("            $*                                                 *$     \n");
				printf("            $*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$     \n");
				break;

case 2: printf("                                        (~~~)                  \n");
printf("                                                         | |\n");
printf("                                                        (___)\n");
printf("                                                         ll/\n");
printf("                                                         l//\n");
printf("                                                         //l\n");
printf("                                                      yy /ll yy\n");
printf("                                                  yyyyy  lll  yyy\n");
printf("                                               yyyyyy    ll/   yyyy\n");
printf("                                              yyyyyyyyy  l//  yyyyyy\n");
printf("                                               yyyyyyyyy //l yyyyyyy\n");
printf("                                                 yyyyyy  /ll  yyyyy\n");
printf("                                                       y lll y\n");
printf("                ccccc:Ccc:Ccc                        yyy ll/ yyy\n");
printf("            cc:===:Cccc:Cccc:Ccc:c                 yyyy  l//  yyyyy\n");
printf("          ccc:==:Cc# X Cc:Ccc:Cccc:Ccc              yyyy //l yyyyy\n");
printf("     |~~~~~~~cc===c X+X C:Ccc:Cc:Ccccc:Cc        yyyyy   /ll  yyyyyy\n");
printf("     `~vvv ==== cc   X C:Ccc:Cc :Cc:Cccc:Ccc      yyyyy  lll yyyy\n");
printf("     vv  v ====  c  /   cc:Ccc Ccc:Cc:Cccc:Ccc:c yyyyy   ll/  yyyyy\n");
printf("      vvv          X     cc:C c:C c:Ccc:Ccccc:Ccc  yyyyy l//    yyyy\n");
printf("       u     __   X+X   c:C c:Cc :Ccc Cc:Cc c:Ccccc   yy //l yyyyy\n");
printf("       uu   /@@    X       c:Cc Cccc cc:Cc ccc:Cccc:c  y /ll  yyyyy\n");
printf("        uu         X         c :Ccc c:Ccc cc:Ccccccc:c   lll     yyy\n");
printf("          u       X+X      )  Cccc ccccc Cccccc :Cccccc: ll/      y\n");
printf("          u        X      ) / C: ccc:C cccc:C ccc:C :cccl//\n");
printf("          u       /      /   /   Cccc:  Ccc:c  ccCc:  ccccc/_\n");
printf("          uu     X      u      /  Cc     Ccc    Ccc     Cccc ._____\n");
printf("          u @@) (_)   u`        / c      cc      c           /\n");
printf("          |u    u u  u           *        c        &&&  &  /`  @\n");
printf("           |uuu/  uu/             /            &&&&  &&  /`   @@@\n");
printf("                                   | &&&  &&&&   &&&&  (   @@ * @@\n");
printf("                                   |&    &&&   &&&   & (      @@@\n");
printf("                                   | &&&&   &&&&  &&  (  @     @\n");
printf("                                  /      /      /     ( @@@        @\n");
printf("                    ________     |   /    /      /  / (  * @@    @@\n");
printf("                  /`        `    /    /   /~~~~~     /` @@        @\n");
printf("                /`            `| _______/         |_____\\n");
printf("              ,'                                         `\\n");
printf("              |        |                                   `~~~~~~~~\n");
printf("              |       /``|                       /\n");
printf("              |      |     | _______ /_________/____________________\n");
printf("              `,     `,     ` /         |___________________________\n");
printf("                |     `|    /`             /             ll/   yyyy\n");
printf("                  |      |/`             /`              l// yyyyy\n");
printf("                    |     `(          / `                //l yyyy\n");
printf("                     `|~~~~~ |,    / `               yyy /ll yy\n");
printf("                     /``|______|/`                 yyyyy lll\n");
printf("                   /          /`                  yyyyy  ll/\n");
printf("                  (         (`                     yyyy  l//\n");
printf("                  (       (`                         yyy //l\n");
printf("                   |       |                           y yyy yyy\n");
printf("                     |       |,                          llyyyyyyy\n");
printf("                       |       (                         ll/   yyyyy\n");
printf("                        `|~~~~~~ |,                      l// yyyy\n");
printf("                          `|_______|                 yyy //l y\n");
printf("                                                   yyyy  /ll\n");
printf("                                                  yyyy   lll\n");
printf("                                                   yyyy  ll/\n");
printf("                                                     yyy l//\n");
printf("                                                      yy //l\n");
printf("                                                       y /ll\n");
printf("                                                         lll\n");
printf("                                                         lll\n");
printf("                                                         | |\n");
printf("                                                        /   \\n");
printf("                                                      /       \\n");
printf("                                                      ~~~~~~~~~\n");
break;

case 3: printf("Chess pieces by Joan G. Stark\n");
printf("                                                     _:_\n");
printf("                                                    *-.-*\n");
printf("                                           ()      __.*.__\n");
printf("                                        .-:--:-.  |_______|\n");
printf("                                 ()      |____/    |=====/\n");
printf("                                 /|      {====}     )___\n");
printf("                      (|=,      //|)      )__(     /_____\n");
printf("      __    |'-'-'|  //  .|    (    )    /____|     |   |\n");
printf("     /  |   |_____| (( |_  |    )__(      |  |      |   |\n");
printf("     |__/    |===|   ))  `|_)  /____|     |  |      |   |\n");
printf("    /____|   |   |  (/     |    |  |      |  |      |   |\n");
printf("     |  |    |   |   | _.-'|    |  |      |  |      |   |\n");
printf("     |__|    )___(    )___(    /____|    /____|    /_____\n");
printf("    (====)  (=====)  (=====)  (======)  (======)  (=======)\n");
printf("    }===={  }====={  }====={  }======{  }======{  }======={\n");
printf("jgs(______)(_______)(_______)(________)(________)(_________)\n");
break;

}
}
