#include<stdio.h>

    int main()
    {
        float n1; // salário
        float n2; // valor empréstimo
        float resultado;
            scanf ("%f %f",&n1,&n2);

        resultado = n2/n1;
        if (resultado < 1.2){
            printf("emprestimo concedido");
        }else{
            printf("emprestimo nao concedido");
}
return 0;




}
    