#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color f0");
    int m,n,i;
    printf ("Apresente o numero de elementos do vetor: ");
    scanf ("%d", &n);
    int v[100]={}, v2[100]={};
    printf("Apresente o tamanho do deslocamento que deve ser feito: ");
    scanf ("%d", &m);
    for (i=0;i<n;i++){
        printf("V[%d]: ", i);
        scanf ("%d", &v[i]);
    }
    for (i=0;i<n;i++){
        if (i+m>=n)
            v2[i+m-n]=v[i];
        else
            v2[i+m]=v[i];
    }
    for (i=0;i<n;i++){
        printf("\nV2[%d]: %d", i, v2[i]);
    }
    printf("\n");
	system ("pause");
	return(0);
}
