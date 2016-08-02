#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int n,d;
}Tracional;

int main(){
    Tracional r1, r2;
    int q, r, a, b;

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
    if ((r1.n*r2.d)+(r2.n*r1.d)!=0){
        if ((r1.n*r2.d)+(r2.n*r1.d) > r1.d*r2.d){
            a = (r1.n*r2.d)+(r2.n*r1.d);
            b = r1.d*r2.d;
        }
        else{
            a = r1.d*r2.d;
            b = (r1.n*r2.d)+(r2.n*r1.d);
        }
        while (b != 0){
            q = a / b;
            r = a % b;
            a = b;
            b = r;
        }
        printf("\nSoma (r1+r2): %d/%d",((r1.n*r2.d)+(r2.n*r1.d))/a, (r1.d*r2.d)/a);
    }
    else
        printf("\nSoma (r1+r2): 0");

    //subtracao
    if ((r1.n*r2.d)-(r2.n*r1.d)!=0){
        if ((r1.n*r2.d)-(r2.n*r1.d) > r1.d*r2.d){
            a = (r1.n*r2.d)-(r2.n*r1.d);
            b = r1.d*r2.d;
        }
        else{
            a = r1.d*r2.d;
            b = (r1.n*r2.d)-(r2.n*r1.d);
        }
        while (b != 0){
            q = a / b;
            r = a % b;
            a = b;
            b = r;
        }
        printf("\nSubtracao (r1-r2): %d/%d",((r1.n*r2.d)-(r2.n*r1.d))/a, (r1.d*r2.d)/a);
    }
    else
        printf("\nSubtracao (r1-r2): 0");

    //multiplicacao
    if (r1.n*r2.n > r1.d*r2.d){
        a = r1.n*r2.n;
        b = r1.d*r2.d;
    }
    else{
        a = r1.d*r2.d;
        b = r1.n*r2.n;
    }
    while (b != 0){
        q = a / b;
        r = a % b;
        a = b;
        b = r;
    }
    printf("\nMultiplicacao (r1*r2): %d/%d", (r1.n*r2.n)/a, (r1.d*r2.d)/a);

    //divisao
    if (r1.d*r2.n != 0)
        if (r1.n*r2.d != r1.d*r2.n){
            if (r1.n*r2.d > r1.d*r2.n){
                a = r1.n*r2.d;
                b = r1.d*r2.n;
            }
            else{
                a = r1.d*r2.n;
                b = r1.n*r2.d;
            }
            while (b != 0){
                q = a / b;
                r = a % b;
                a = b;
                b = r;
            }
            printf ("\nDivisao (r1/r2): %d/%d\n\n", (r1.n*r2.d)/a, (r1.d*r2.n)/a);
        }
        else
            printf ("\nDivisao (r1/r2): 1\n\n");
    else
        printf ("\nDivisao por zero\n\n");

    return(0);
}
