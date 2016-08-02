#include <stdio.h>
#include <stdlib.h>
int main (void){
    int n, *v, *maior, *menor, media=0, i;
    printf ("Apresente a quentidade de elementos do vetor: ");
    scanf ("%d", &n);
    v = malloc (n*sizeof(int));
    if (v==NULL){
        printf("Memoria Insuficiente!!!!\n");
        return (-1);
    }
    for (i=0;i<n;i++){
        printf ("Apresente o elemento %d do vetor: ", i);
        scanf ("%d", &v[i]);
        media+=v[i];
        if (i==0){
            maior = &v[i];
            menor = &v[i];
        }
        else{
            if (v[i]>*maior)
                maior = &v[i];
            if (v[i]<*menor)
                menor = &v[i];
        }
    }
    printf ("A media dos elementos do vetor eh: %f\n"
            "O maior elemento do vetor eh: %d\n"
            "O menor elemento do vetor eh: %d\n",
            (float)media/n, *maior, *menor);
    free(v);
    system ("pause");
    return (0);
}
