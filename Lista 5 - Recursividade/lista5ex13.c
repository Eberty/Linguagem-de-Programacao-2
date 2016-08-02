#include <stdio.h>
#include <stdlib.h>

int MDC (int, int);
void ler(int *, int *);

int main(){
    int m, n;

    ler (&m,&n);
    printf("MDC: %d\n", MDC(m,n));

    return (0);
}

void ler (int *ptm, int *ptn){
    printf ("Apresente m: ");
    scanf ("%d", ptm);
    printf ("Apresente n: ");
    scanf ("%d", ptn);
}

int MDC(int x, int y){
    if ((y<=x) && (x%y==0))
            return y;
    else
        if (x<y)
            return (MDC(y,x));
        else
            return MDC(y, x%y);
}
