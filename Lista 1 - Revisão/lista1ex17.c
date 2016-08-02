#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	float x, y;
    printf ("Apresente x e y:\n");
    scanf ("%f %f", &x, &y);
    if (x==0 || y==0)
        printf ("Pontos sobre os eixos coordenados nao podem ser informados neste programa\n");
    else
        if (x>0 && y>0)
            printf ("Ponto se encontra no primeiro quadrante\n");
        else
            if (x<0 && y>0)
                printf ("Ponto se encontra no segundo quadrante\n");
            else
                if (x<0 && y<0)
                    printf ("Ponto se encontra no terceiro quadrante\n");
                else
                    printf("Ponto se encontra no quarto quadrante\n");
	system ("pause");
	return (0);
}
