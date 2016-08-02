#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * alocavetor(const int);
void liberavetor (int *);
void preenchevetor (const int, int *);
int Max_rec(int *, int);

int main (){
    int *v, n, maior;
    printf ("Apresente a quantidade de numeros: ");
    scanf ("%d", &n);

    v = alocavetor(n);
    preenchevetor(n, v);
    maior = Max_rec(v, n);

    printf("\n\nMaior: %d \n", maior);
	liberavetor(v);

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

void preenchevetor (const int n, int *v){
    int i=0;
    srand(time(NULL));
    for (i=0;i<n;i++){
        v[i] = 1+rand()%100;
        printf ("\nV[%d]: %d", i, v[i]);
    }
}

int Max_rec(int *v, int n){
    if (n==1)
        return v[0];
    else if (v[0]>Max_rec(v+1,n-1))
        return v[0];
    else
        return Max_rec(v+1, n-1);
}

void liberavetor(int *v){
    free(v);
}
