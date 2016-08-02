#include <stdio.h>
#include <stdlib.h>

void Primo (int);

int main (){
    int i;
    printf("Sao primos os numeros:\n");
    for (i=2;i<1000; i++)
        Primo (i);
    return 0;
}

void Primo (int i){
    int aux=0, cont;
    for (cont=2; cont<=i/2; cont++){
        if (i%cont==0){
            aux = 1;
            break;
        }
    }
    if (aux == 0)
        printf("%d\n", i);
}
