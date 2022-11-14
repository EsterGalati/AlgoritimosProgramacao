#include <stdio.h>

void main() {
  int idade;

  printf("Informe a idade do nadador: ");
  scanf("%d", &idade);

  if (idade < 5)
     printf("\nSem classificação.");
  else if (idade <= 7)
	  printf("\ninfantil A");
       else if (idade <= 10)
	       printf("\ninfantil B");
	    else if (idade <= 13)
		    printf("\njuvenil A");
		 else if (idade <= 17)
			 printf("\njuvenil B");
		      else
			 printf("\nsênior");
}