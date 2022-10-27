#include<stdio.h>


int main()
{
    int notas1, notas2,i;
    int media;


        for ( i = 1; i <=14; i++){     // Utilizamos for para quando sabemos o numero exato de repetições que serão feitas
       

            printf("Digite a nota 1:\n");
            scanf("%d", &notas1);

            printf("Digite a nota 2:\n");
            scanf("%d",&notas2);
        media=(notas1+notas2)/2;
        if (media>7) {
            printf("O aluno esta aprovado\n");
            printf(" A media do aluno foi %d\n", media);
        
        }
        else{
            printf("O aluno esta reprovado\n");
            printf(" A media do aluno foi %d\n", media);

        }


    
}
}