#include <stdio.h>
#include <stdlib.h>

void Fatorial (int);

int main(){
    int i, n;
    printf ("Numero de termos da sequencia: ");
    scanf ("%d", &n);
    for (i=1;i<=n;i++)
        Fatorial (i);
    return 0;
}

void Fatorial (int i){
    long int fat=1;
    int cont=1;
    while (cont<=i){
        fat*=cont;
        cont++;
    }
    printf ("%d! = %d\n", i, fat);
}
