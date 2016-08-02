#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
    int a;
    printf ("Apresente um numero inteiro qualquer:");
    scanf ("%d", &a);
    printf ("\nDobro: %d \nTriplo: %d \nMetade: %.1f \nTriplo da Metade: %.1f\n", a*2, a*3, (float)a/2, ((float)a/2)*3);
	system ("pause");
	return (0);
}
