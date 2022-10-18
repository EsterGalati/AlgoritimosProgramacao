#include<stdio.h>


int main(){

   int num;

   printf("Escreva Numero: ");

   scanf("%i", &num);

   if(num % 2 == 0){

       printf("\nO Numero Par\n\n");

   }

   else{

       printf("\nO Numero Impar\n\n");

   }

}