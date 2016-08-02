#include <stdio.h>
#include <stdlib.h>

void ler(int *);
float Serie(const int);

int main(){
    int n;
    float s;

    ler (&n);
    s = Serie(n);
    printf("O Valor da serie S eh: %f\n", s);

    return (0);
}

void ler (int *ptn){
    printf ("Apresente N (N>0): ");
    scanf ("%d", ptn);
}

float Serie (const int n){
    if (n==1)
        return 2.0;
    return ((1.0+n*n)/n + Serie(n-1));
}
