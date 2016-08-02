#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1, n2, d1, d2;

    //ler numeradores e denominadores
    printf ("Apresente o numerador e denominador de r1: \n");
    scanf ("%d %d", &n1, &d1);
    printf ("\nApresente o numerador e denominador de r2: \n");
    scanf ("%d %d", &n2, &d2);

    //denominado!=0
    if (d1==0 || d2==0){
        printf ("\n\nErro!!!\nUm de seus Denominadores eh igual a zero!!!\n");
        return -1;
    }

    //soma
    if ((n1*d2)+(n2*d1)!=0)
        printf("\nSoma (r1+r2): %d/%d",(n1*d2)+(n2*d1), d1*d2 );
    else
        printf("\nSoma (r1+r2): 0");

    //subtracao
    if ((n1*d2)-(n2*d1)!=0)
        printf("\nSubtracao (r1-r2): %d/%d",(n1*d2)-(n2*d1), d1*d2 );
    else
        printf("\nSubtracao (r1-r2): 0");

    //multiplicacao
    printf("\nMultiplicacao (r1*r2): %d/%d", n1*n2, d1*d2);

    //divisao
    if (d1*n2 != 0)
        if (n1*d2 != d1*n2)
            printf ("\nDivisao (r1/r2): %d/%d\n\n", n1*d2, d1*n2);
        else
            printf ("\nDivisao (r1/r2): 1\n\n");
    else
        printf ("\nDivisao por zero\n\n");

    system("pause");
    return(0);
}
