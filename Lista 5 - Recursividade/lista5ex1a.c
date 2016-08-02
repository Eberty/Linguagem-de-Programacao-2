#include <stdio.h>
#include <stdlib.h>

int Soma (int);

int main(){
    int n, s;
    printf ("Apresente N: ");
    scanf ("%d", &n);
    s = Soma(n);
    printf ("A soma de 0 ate %d eh: %d\n", n, s);
    system ("pause");
    return (0);
}

int Soma (int n){
    int i, s=0;
    for (i=0;i<=n;i++)
        s=s+i;
    return s;
}
