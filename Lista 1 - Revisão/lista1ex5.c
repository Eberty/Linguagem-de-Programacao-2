#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
	float r;
	printf ("Apresente o valor do raio de um circulo: ");
	scanf ("%f", &r);
	printf ("\nDiametro: %.2f \nCircunferencia: %.2f \nArea: %.2f\n", 2*r, 2*3.14*r, 3.14*r*r);
	system ("pause");
	return (0);
}
