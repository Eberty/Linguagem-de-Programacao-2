#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *val, n, max, min;
    float media;
}TSeq;

int main(){
    TSeq a;
    int i;

    //ler n, alocar e verificar
    printf("Apresente a quantidade de elementos da sequencia: ");
    scanf("%d", &a.n);
    a.val = malloc(a.n * sizeof(int));
    if (a.val == NULL){
        printf("Erro de alocacao!!!\n");
        return -1;
    }

    a.media = 0;
    for (i=0; i<a.n; i++){
        printf("Apresente o elemento %d: ", i);
        scanf("%d", &a.val[i]);
        if (i==0){
            a.max = a.val[i];
            a.min = a.val[i];
        }
        else
            if (a.val[i] > a.max)
                a.max = a.val[i];
            else if (a.val[i] < a.min)
                a.min = a.val[i];
        a.media+=a.val[i];
    }

    printf("Maximo: %d \nMinimo: %d \nMedia: %.2f \n", a.max, a.min, a.media/a.n);

    free(a.val);
    return(0);
}
