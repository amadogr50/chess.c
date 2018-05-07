#include "server.h"
#include "client.h"
void init_multi()
{
int multiselection;
printf("\n 1. To host a game.\n 2. To join a game.");
scanf("%d", &multiselection);
if(multiselection==1)
  init_server();
else
  init_client();
}
