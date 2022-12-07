#include <stdio.h>
#include <string.h>

int main(){

char nome[50], email[50], edereco[50], bnome[50], bemail[50], bedereco[50];

gets(nome);

gets(email);

gets(edereco);

strcpy(bnome,nome);
strcpy(bemail,email);
strcpy(bedereco,edereco);


printf("%s\n%s\n%s", bnome, bedereco, bemail);
}