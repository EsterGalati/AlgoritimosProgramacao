#include <stdio.h>
#include <string.h>

int main(){
char nome[30], sobre[30], cpf[30];
int i;

gets(nome);
gets(sobre);
gets(cpf);

printf("%s%c", nome, sobre[0]);
for(i = 0; i < 3; ++i)
    printf("%c", cpf[i]);
}