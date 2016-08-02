#include <stdio.h>
#include <stdlib.h>

void ler(int *);
int Dsoma (int);

int main(){
    int n, res;

    ler (&n);
    res = Dsoma(n);
    printf("Soma dos digitos de %d eh %d", n, res);

    return (0);
}

void ler (int *ptn){
    printf ("Apresente n: ");
    scanf ("%d", ptn);
}

int Dsoma (int n){
    if (n<10)
        return n;
    return (Dsoma(n/10) + (n%10));
}
