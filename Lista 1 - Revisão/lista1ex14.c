#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
    int conta, c,v,d,u;
    printf ("Informe o valor da conta a ser paga: ");
    scanf ("%d", &conta);
    c=conta/50;
    conta%=50;
    v=conta/20;
    conta%=20;
    d=conta/10;
    conta%=10;
    u=conta;
    printf ("Para pagar a conta eh nessesario \n%d Notas de 50 \n%d Notas de 20 \n%d Notas de 10 \n%d Notas de 1\n", c,v,d,u);
	system ("pause");
	return (0);
}
