#include <stdio.h>
#include <stdlib.h>

void Divisores (int, int, int *);
void ler(int *);


int main(){
    int n, cont, soma=0;

    ler (&n);
    cont=n-1;
    printf("Divisores:\n");
    Divisores(n,cont, &soma);
    if (soma==n)
        printf("Perfeito\n");

    return 0;
}

void Divisores (int n, int cont, int *soma){
    if (cont == 1){
        *soma = *soma + cont;
        printf("1\n");
        return ;
    }
    else if (n%cont==0){
            *soma = *soma + cont;
            printf("%d\n", cont);
    }
    Divisores(n, --cont, soma);
}

void ler (int *ptn){
    printf ("Apresente o numero N: ");
    scanf ("%d", ptn);
}
