#include<stdio.h>
    int main()
    {
        char nome[64];
        float vendas,salario,total;
            printf("INFORME O NOME CORRESPODENTE:");
            scanf("%s",&nome);
            printf("INFORME SALARIO EM REAIS:");
            scanf("%f",&salario);
            printf("INFORME TOTAL DE VENDAS EM REAIS:");
            scanf("%f",&vendas);
            system("cls");
            vendas=vendas*0.15;
            total=vendas+salario;


            printf("NOME:%s\n", nome);
            printf("SALARIO:%.2f\n", salario);
            printf("COMISSAO:%.2f\n", vendas);
            printf("VALOR TOTAL:%.2f\n", total);
    } 