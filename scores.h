/*
    Library for managing the score´s file.
    Score Structure:
    <# game number > - <player1 nick> "vs" <player2 nick> - <winner>
*/

#ifndef SCORES_H_INCLUDED
#define SCORES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

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

  if(access_type == 2)
  {
    if ((archivo = fopen("zscores.dat", "ab")) != NULL)
      write(archivo);
    else
      printf("\n File couldn't open." );
      fclose(archivo);
  }
  if(access_type == 1)
  {
    if((archivo = fopen("zscores.dat", "rb")) != NULL)
      read(archivo);
    else
      printf("\nFile couldn't open");
    fclose(archivo);
  }
  return 0;
}

void write(FILE *archivo)
{
  player playerScore1;
  int answer;
printf("\nYou won!\n Wanna enter the scoreboard? (1-Yes, 0-No)");
scanf("%d", &answer);

if(answer == 1)
  {

    printf("\nEnter your name: ");
    scanf("%s", &playerScore1.scorename);
    playerScore1.elo = (rand() % 1761) + 1000;
    fwrite(&playerScore1, sizeof(playerScore1), 1, archivo);

  }
}

void read(FILE *archivo)
{
  player playerScore1;
  fread(&playerScore1, sizeof(playerScore1), 1, archivo);
  while(!feof(archivo))
  {
    printf("\nName: %s", playerScore1.scorename);
    printf("\nScore: %d\n", playerScore1.elo);
    fread(&playerScore1, sizeof(playerScore1), 1, archivo);
  }
}

#endif // SCORES_H_INCLUDED
