#include <stdio.h>
#include <string.h>

int main(){
char nome[30], sobre[30],ult[30];
gets(nome);
gets(sobre);
gets(ult);

strcat(nome,sobre);
strcat(nome,ult);

printf("%s", nome);

}
