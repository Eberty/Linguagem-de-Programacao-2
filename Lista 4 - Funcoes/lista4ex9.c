#include <stdio.h>
#include <stdlib.h>

void Primo (int);
int numero (void);

int main (){
    int num, i;

    num = numero();
    printf("\nSao primos os numeros de 1 ate %d:\n", num);
    for (i=2;i<=num; i++)
        Primo (i);
    return 0;
}

int numero (){
    int n;
    printf("Apresente um numero: ");
    scanf("%d", &n);
    return n;
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
