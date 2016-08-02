#include <stdio.h>
#include <stdlib.h>

int SomaRec (int);

int main(){
    int n, s;
    printf ("Apresente N (Positivo): ");
    scanf ("%d", &n);
    if (n<0)
        exit(-1);
    s = SomaRec(n);

    printf ("A soma de 0 ate %d eh: %d\n", n, s);
    system ("pause");
    return (0);
}

int SomaRec (int n){
    if (n==1)
        return 1;
    else
        return n + SomaRec(n-1);
}
