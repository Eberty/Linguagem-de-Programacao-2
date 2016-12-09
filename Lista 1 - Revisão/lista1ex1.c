#include <stdio.h>

int main(void) {
	char TEL[12], NOME[40];
	
	printf ("Apresente o nome: ");
	fflush(stdin);
	fgets (NOME, 40, stdin);
	
	printf ("Apresente o telefone [(xxx)xxxx-xxxx]:   ");
	gets (TEL);
	
        printf ("Nome: %s\nTelefone: %s\n", NOME, TEL);
	return (0);
}
