#include<stdio.h>
#include"stdlib.h"
int
main (void) {
  printf ("Ola, digite uma das siglas dos estados do Basil [SP MG RJ MS]: ");
  
  char estado[4] = { "" };
  scanf ("%2s", estado);

  switch (*(int *) estado) {
  case   'S'|'P' << 8:
                     printf ("Sao Paulo - %s\n", estado);
                     break;
  case   'M'|'G' << 8:
                     printf ("Minas Gerais - %s\n", estado);
                     break;
  case   'R'|'J' << 8:
                     printf ("Rio Janeiro - %s\n", estado);
                     break;
  case   'M'|'S' << 8:
                     printf ("Mato Grosso Sul - %s\n", estado);
                     break;
  default:
         printf ("Sigla inexistente!\n");
  }
  return 0;
}