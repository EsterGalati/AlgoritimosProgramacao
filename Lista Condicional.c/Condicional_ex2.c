#include<stdio.h>

    int main()
    {
        int V1,V2;

    printf("Valor 1 :"); scanf("%d",&V1);
    printf("Valor 2 :"); scanf("%d",&V2);

        if (V1==V2){
    printf("O valor e igual \n\n ");
}
        else{
    printf("O valor e diferente \n\n");
}
        if (V1>V2){
    printf("O valor maior e %d",V1);
}
        if (V1<V2){
    printf("O valor menor e %d", V2);
}
return(0);
system("pause");
        }