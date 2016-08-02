#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
	int conta;
	float saldo, dep, saque;
	printf ("Numero da Conta: ");
	scanf ("%d", &conta);
	printf ("Digite o saldo da conta: ");
	scanf("%f", &saldo);
	printf("Digite o valor do deposito: ");
	scanf("%f", &dep);
	printf("Digite o valor retirado: ");
	scanf("%f", &saque);
	printf("Ta Lido. Volte Sempre !!\n");
	system ("pause");
	return (0);
}
