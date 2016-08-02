#include <stdio.h>
#include <stdlib.h>

void ler(float *, float *, int *);
float nTermo (float, float, int);

int main(){
    int n;
    float a,r;

    ler (&a,&r,&n);
    printf("N-esimo elemento da sequencia geometrica: %f \n", nTermo(a, r, n));

    return (0);
}

void ler (float *pta, float *ptr, int *ptn){
    printf ("Apresente o primeiro terma (a): ");
    scanf ("%f", pta);
    printf ("Apresente a razao (r): ");
    scanf ("%f", ptr);
    printf ("Apresente o inteiro n: ");
    scanf ("%d", ptn);
}

float nTermo (float a, float r, int n){
    if (n==1)
        return a;
    return r * nTermo (a,r,(n-1));
}
