#include <stdio.h>
#include <stdlib.h>

int Multiplo (int, int);

int main(){
    int a, b, n, i;
    printf("Apresente a quantidade de duplas a verificar: ");
    scanf("%d", &n);
    printf("\n");

    for (i=0;i<n;i++){
    printf ("Apresente o 1 numero (menor): ");
    scanf("%d", &a);
    printf ("Apresente o 2 numero (maior): ");
    scanf("%d", &b);


    if (Multiplo(a, b)==1)
        printf("%d eh multiplo de %d\n\n", b, a);
    else
        printf("%d nao eh multiplo de %d\n\n", b, a);
    }
    return 0;
}

int Multiplo(int a, int b){
    if (b%a==0)
        return 1;
    else
        return 0;
}
