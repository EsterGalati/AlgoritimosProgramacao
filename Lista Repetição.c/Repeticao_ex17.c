//Escreva um programa que leia um n�mero inteiro positivo N e em seguida imprima N linhas
//do chamado tri�ngulo de Floyd:

#include<stdio.h>
int main(){
	int i, j=1, n;
	scanf("%d", &n);
    for (i=1; i<=(n*(n+1))/2; i++){
        printf("%d ",i);
        if(i==(j*(j+1))/2){
            printf("\n");
            j++;
        }
    }
}
