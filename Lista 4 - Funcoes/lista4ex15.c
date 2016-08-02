#include <stdio.h>
#include <stdlib.h>

void quadrado (int, int);
void prn_quadrado(int);
void prn_quadrado_vaz(int);

void prn_linha(int);
void prn_linha_vaz(int);

int main(){
    int n, vc;
    printf("Digite a quantidade de *: ");
    scanf("%d", &n);
    printf("Digite 0-Quadrado vazado ou 1-Quadrado cheio: ");
    scanf("%d", &vc);
    printf("\n");

    quadrado (vc, n);

    system("PAUSE");
    return 0;
}

void quadrado(int vc, int n){
    if (vc==1)
        prn_quadrado(n);
    else if (vc==0)
        prn_quadrado_vaz(n);
    else
        printf("Valor fornecido diferente de 0 ou 1\n\n");
}

void prn_linha(int n){
    int j;
    for(j=0;j<n;j++)
    printf("*");
    printf("\n");
}

void prn_linha_vaz(int n){
    int j;
    printf("*");
    for(j=1;j<n-1;j++)
        printf(" ");
    printf("*\n");
}

void prn_quadrado(int n){
    int i;
    for(i=0;i<n;i++)
        prn_linha(n);
    printf("\n");
}

void prn_quadrado_vaz(int n){
    int i;
    prn_linha(n);
    for(i=1;i<n-1;i++)
        prn_linha_vaz(n);
    prn_linha(n);
    printf("\n");
}
