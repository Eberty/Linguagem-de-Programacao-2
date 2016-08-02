#include <stdio.h>
#include <stdlib.h>

float potencia_rec(float, int);
void ler(int *, float *);

int main(){
    int n;
    float p, a;

    ler (&n,&a);
    p = potencia_rec(a, n);

    printf ("%.1f elevado a %d eh igual a: %.3f\n", a, n, p);
    system ("pause");
    return (0);
}

void ler (int *ptn, float *pta){
    printf ("Apresente A: ");
    scanf ("%f", pta);
    printf ("Apresente N: ");
    scanf ("%d", ptn);
}

float potencia_rec(float a, int n){
    if (n==0)
        return 1;
    else
        if (n<0)
            return 1.0/(a*potencia_rec(a, -(n+1)));
        else
            return a*potencia_rec(a, n-1);
}

