#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x,y,z;
} Tplano;

int main (){
    Tplano p;
    int a, b, c, d;
    printf("Apresente aos valores a, b, c, d do ponto (Ax + By + Cz = D):\n");
    scanf ("%d %d %d %d", &a,&b,&c,&d);
    printf("\n\nAgora apresente as cordenadas x,y,z do ponto p:\n");
    scanf ("%d %d %d", &p.x, &p.y, &p.z);
    if (a*p.x + b*p.y + c*p.z == d)
        printf("\nO ponto pertence ao plano!!!\n");
    else
        printf("\nO ponto nao pertence ao plano de jeito nenhum!!!\n");
    return 0;
}
