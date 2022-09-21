#include<stdio.h>
#include<math.h> // BIBLIOTECA MATEMATICA 
#define PI 3.14159 //CONSTANTE
int main(){
  //Calcular a area do circulo--- area=pi*raio²
  float area, raio;
  printf("Digite o valor do raio");
  scanf("%f", &raio);
  area = 3.14159 * pow(raio,2); // POW FUNÇÃO MATEMATICA DA BIBLIOTECA MATH.H
  printf("Area:%f", area); //FIM DA FUNÇÃO

}