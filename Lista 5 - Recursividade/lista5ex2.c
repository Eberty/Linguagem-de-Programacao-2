#include <stdio.h>
#include <stdlib.h>

int DigitosRec (int);

int main(){
    int n, d;
    printf ("Apresente N (Positivo): ");
    scanf ("%d", &n);
    if (n<0)
        exit(-1);
    d = DigitosRec(n);

    printf ("Digitos: %d\n", d);
    system ("pause");
    return (0);
}

int DigitosRec (int n){
    if (abs(n)<10)
        return 1;
    else
        return 1 + DigitosRec(n/10);
}
