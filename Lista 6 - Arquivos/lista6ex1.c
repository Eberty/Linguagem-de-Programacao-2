#include <stdio.h>
#include <stdlib.h>
int main(){
    int maior, menor, soma=0, i=0, n;
    FILE *arquivo;

    if ((arquivo = fopen("lista6ex1.txt", "r")) == NULL){
        printf ("Erro ao abrir arquivo!!!\n");
        exit (1);
    }
    fscanf(arquivo, "%d", &n);
    maior=n;
    menor=n;
    while(!feof(arquivo)){
        fscanf(arquivo, "%d\n", &n);
        soma+=n;
        i++;
        if (n>maior)
            maior = n;
        if (n<menor)
            menor = n;
    }
    fclose(arquivo);
    printf("Maior: %d \nMenor: %d \nMedia: %d \n", maior, menor, soma/i);
    return 0;
}
