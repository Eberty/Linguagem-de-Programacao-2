#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color f0");
	int ATU=0, ANT=1, PROX=0, CONT=1, n;
	printf ("Quantos termos de Fibonacci deseja mostrar? ");
	scanf("%d", &n);
	while (CONT<=n)
	{
		printf ("%d\n", PROX);
        PROX=ATU+ANT;
		ANT=ATU;
		ATU=PROX;
		CONT++;
	}
	system ("pause");
	return(0);
}
