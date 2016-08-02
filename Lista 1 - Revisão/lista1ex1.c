#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
	char TEL[12], NOME[40];
	printf ("Apresente o nome: ");
	fflush(stdin);
	fgets (NOME, 40, stdin);
	printf ("Apresente o telefone [(xxx)xxxx-xxxx]:   ");
	gets (TEL);
        printf ("Nome: %s\nTelefone: %s\n", NOME, TEL);
	system ("pause");
	return (0);
}
