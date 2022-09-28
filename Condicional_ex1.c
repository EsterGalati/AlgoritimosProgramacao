#include<stdio.h>

int main()
{
    int valor1, valor2;
    printf("Digite os respectivos numeros");
    scanf("%d%d", &valor1, &valor2); 
    
  
   if(valor1>valor2)
        printf("O valor(%d) é maior que o valor (%d)\n", valor1,valor2);
         else printf("O valor (%d) e menor que o valor (%d)\n", valor1,valor2);



    return 0;

}
