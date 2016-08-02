#include <stdio.h>
#include <stdlib.h>

void ordeminversa (int);

int main (){
    int num;
    printf ("Apresente um numero inteiro positivo: ");
    scanf ("%d", &num);

    ordeminversa (num);

    printf ("\n");
    return 0;
}

void ordeminversa (int num){
    int cifra;
    do{
        cifra = num % 10;
        printf ("%d", cifra);
        num/=10;
    } while (num>0);
}
