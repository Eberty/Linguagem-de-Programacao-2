#include <stdio.h>
#include <stdlib.h>

void imprime (int, int);
void ler(int *, int *);

int main(){
    int a, b;

    ler (&a,&b);
    printf("Numeros do intervalo [%d, %d]:\n", a ,b);
    imprime (a,b);

    return (0);
}

void ler (int *pta, int *ptb){
    printf ("Apresente A: ");
    scanf ("%d", pta);
    printf ("Apresente B: ");
    scanf ("%d", ptb);
}

void imprime (int a, int b){
    if (a>b)
        return ;
    printf("%d\n", a);
    imprime (++a, b);
}
