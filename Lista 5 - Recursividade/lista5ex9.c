#include <stdio.h>
#include <stdlib.h>

void ImprimeSerie (int, int, int);
void ler(int *, int *, int *);

int main(){
    int i, j, k;

    ler (&i,&j,&k);
    printf("Numeros do intervalo [%d, %d] com incremento %d:\n", i ,j, k);
    ImprimeSerie (i,j,k);

    return (0);
}

void ler (int *pti, int *ptj, int*ptk){
    printf ("Apresente i: ");
    scanf ("%d", pti);
    printf ("Apresente j: ");
    scanf ("%d", ptj);
    printf ("Apresente o incremento k: ");
    scanf ("%d", ptk);
}

void ImprimeSerie (int i, int j, int k){
    if (i>j)
        return ;
    printf("%d\n", i);
    i=i+k;
    ImprimeSerie (i,j,k);
}
