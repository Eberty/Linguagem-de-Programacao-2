#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int n,d;
}Tracional;

int main(){
    Tracional r1, r2;

    //ler numeradores e denominadores
    printf ("Apresente o numerador e denominador de r1: \n");
    scanf ("%d %d", &r1.n, &r1.d);
    printf ("\nApresente o numerador e denominador de r2: \n");
    scanf ("%d %d", &r2.n, &r2.d);

    //denominado!=0
    if (r1.d==0 || r2.d==0){
        printf ("\n\nErro!!!\nUm de seus Denominadores eh igual a zero!!!\n");
        return -1;
    }

    //soma
    if ((r1.n*r2.d)+(r2.n*r1.d)!=0)
        printf("\nSoma (r1+r2): %d/%d",(r1.n*r2.d)+(r2.n*r1.d), r1.d*r2.d);
    else
        printf("\nSoma (r1+r2): 0");

    //subtracao
    if ((r1.n*r2.d)-(r2.n*r1.d)!=0)
        printf("\nSubtracao (r1-r2): %d/%d",(r1.n*r2.d)-(r2.n*r1.d), r1.d*r2.d);
    else
        printf("\nSubtracao (r1-r2): 0");

    //multiplicacao
    printf("\nMultiplicacao (r1*r2): %d/%d", r1.n*r2.n, r1.d*r2.d);

    //divisao
    if (r1.d*r2.n != 0)
        if (r1.n*r2.d != r1.d*r2.n)
            printf ("\nDivisao (r1/r2): %d/%d\n\n", r1.n*r2.d, r1.d*r2.n);
        else
            printf ("\nDivisao (r1/r2): 1\n\n");
    else
        printf ("\nDivisao por zero\n\n");

    system("pause");
    return(0);
}
