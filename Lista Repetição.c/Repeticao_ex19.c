#include<stdio.h>
#include<math.h>
int main()
{
    int numerador = -1;
float resposta = 0;
for (int denominador = 1; denominador <= 50; denominador++){
    numerador = numerador + 2;
    resposta = resposta + (numerador / denominador);
}

printf("%f", resposta);
}

