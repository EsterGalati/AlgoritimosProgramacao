//Construa um algoritimo que leia um numero inteiro de horas e mostre ao usuario o correspodente em minutos
//segundos

#include<stdio.h> // BIBLIOTECA PARA OS COMANDOS  printf e scanf
int main(){ //incio do algoritimo   
int horas, minutos, segundos;
printf("Digite a quantidade de horas");
scanf("%d",&horas);
minutos = horas * 60;
segundos = minutos * 60;
printf("Minutos: %d" , minutos);
prinf("Segundos %d", segundos);
}

