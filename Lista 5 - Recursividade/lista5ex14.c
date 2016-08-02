#include <stdio.h>
#include <stdlib.h>

void Divisores (int, int);
void ler(int *);


int main(){
    int n, cont;

    ler (&n);
    cont=n;
    printf("Divisores:\n");
    Divisores(n,cont);

    return 0;
}

void Divisores (int n, int cont){
    if (cont == 1){
        printf("1\n");
        return ;
    }
    else if (n%cont==0){
           printf("%d\n", cont);
    }
    Divisores(n, --cont);
}

void ler (int *ptn){
    printf ("Apresente o numero N: ");
    scanf ("%d", ptn);
}
