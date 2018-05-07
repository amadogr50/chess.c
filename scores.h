/*
    Library for managing the score´s file.
    Score Structure:
    <# game number > - <player1 nick> "vs" <player2 nick> - <winner>
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int pos;
  char scorename[31];
  int elo;
} player;

void write(FILE *archivo);
void read(FILE *archivo);

int show_scores(int access_type)
{
  FILE *archivo;
  int access_type;

  if(access_type == 2)
  {
    if ((archivo = fopen("zscores.dat", "wb")) != NULL)
      write(archivo)
    else
      printf("\n File couldnt open.", );
      fclose(archivo);
  }
  if(access_type == 1)
  {
    if((archivo = fopen("zscores.dat", "rb")) != NULL)
      read(archivo);
    else
      printf("\nFile couldnt open", );
    fclose(archivo);
  }
  return 0;
}

void write(FILE *archivo)
{
  player playerScore1;
  int i=0, answer;
printf("\nYou won!\n Wanna enter the scoreboard? (1-Yes, 0-No)");
scanf("(%d)", &answer);

if(answer == 1)
  {
    i++;
    playerScore1.pos = i;
    printf("\nEnter your name: ");
    fgets(playerScore1.scorename, 30, stdin);
    playerScore1.elo = (playerScore1.elo + 1) * 1200;
    fwrite(&playerScore1, sizeof(playerScore1), 1, archivo);
  }
}

void read(FILE *archivo)
{
  player playerScore1;
  fread(&playerScore1, sizeof(playerScore1), 1, archivo);
  while(!feof(archivo))
  {
    printf("\nPosition: %d", playerScore1.pos);
    printf("\nName: %s", playerScore1.scorename);
    printf("\nScore: %d", playerScore1.elo);
    fread(&playerScore1, sizeof(playerScore1), 1, archivo);
  }
}
