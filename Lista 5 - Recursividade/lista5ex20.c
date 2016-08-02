#include <stdio.h>
#include <stdlib.h>

int comb (int, int);
void ler(int *, int *);

int main(){
    int n, k,grupos;

    ler (&n,&k);
    grupos = comb(n,k);
    printf("Grupos distintos com %d pessoas a partir de %d pessoas: %d\n", k ,n, grupos);


    return (0);
}

void ler (int *ptn, int *ptk){
    printf ("Apresente N - total de pessoas: ");
    scanf ("%d", ptn);
    printf ("Apresente K - pessoas por grupo: ");
    scanf ("%d", ptk);
}

int comb(int n, int k){
    if (k==1)
        return n;
    if (k==n)
        return 1;
    else if (1<k<n)
        return comb(n-1, k-1) + comb(n-1,k);

}
