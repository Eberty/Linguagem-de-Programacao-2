#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	system ("color f0");
    float v0,i;
    int t;
    printf ("Apresente o valor inicial: ");
    scanf ("%f", &v0);
    printf ("Apresnete a taxa de juros em porcentagem e a quantidade de meses: \n");
    scanf ("%f %d", &i, &t);
    v0=v0 + pow(1+i,t);
    printf ("Saldo atualizado de sua cardeneta de poupanca: %.2f", v0);
	system ("pause");
	return (0);
}
