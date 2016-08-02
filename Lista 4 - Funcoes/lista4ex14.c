#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * alocavetor(const int);
void liberavetor (int *);

int main (){
    int *v, i, n, maior=0, menor=100, p=1, s=0;
    printf ("Apresnete a quantidade de numeros: ");
    scanf ("%d", &n);

    v = alocavetor(n);
    srand(time(NULL));

    for (i=0;i<n;i++){
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
    printf("\n\nMaior: %d \nMenor: %d \nProd. dos pares: %d \nSoma dos impares: %d\n", maior, menor, p, s);
    printf("\n");
	liberavetor(v);
	system ("pause");
	return(0);
}

int * alocavetor(const int n){
    int *vetor;
    vetor = malloc(n * sizeof(int));
    if (vetor==NULL){
        printf("Erro, estouro de memoria!!!\n");
        exit(1);
    }
    return vetor;
}

void liberavetor(int *v){
    free(v);
}
