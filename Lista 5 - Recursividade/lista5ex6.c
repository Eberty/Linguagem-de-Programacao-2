#include <stdio.h>
#include <stdlib.h>

int F(int);
int F1(int);
void ler(int *);

int main(){
    int n, r;

    ler (&n);
    r = F(n);
    printf ("Resposta: %d \n", r);
    r = F1(n);
    printf ("Resposta: %d \n", r);
    return (0);
}

void ler (int *n){
    printf ("Apresente N: ");
    scanf ("%d", n);
}

int F (int n){
    int res, i;
    for (i=n%4 ; i<=n ; i=i+4)
        if (i<4)
            res = (3*i) ;
        else
            res= (2*res) + 5;
    return res;
}

int F1(int n){
    int res, i;
    i=n%4;
    res = (3*i);
    for (i=i+4; i<=n ; i=i+4)
       res= (2*res) + 5;
    return res;
}
