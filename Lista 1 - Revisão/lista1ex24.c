#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 1000
int main (void)
{
	system ("color 0f");
    int v[n], i, t, maior=0, menor=100, p=1, s=0;
    printf ("Apresnete a quantidade de termos: ");
    scanf ("%d", &t);
    srand(time(NULL));
    for (i=0;i<t;i++){
        v[i] = 1+rand()%100;
        printf ("\nV[%d]: %d", i, v[i]);
        if (maior<v[i])
            maior=v[i];
        if (menor>v[i])
            menor=v[i];
        if (v[i]%2==0)
            p*=v[i];
        else
            s+=v[i];
    }
    printf("\nMaior: %d \nMenor: %d \nProd. dos pares: %d \nSoma dos impares: %d\n", maior, menor, p, s);
	system ("pause");
	return(0);
}
