#include <stdio.h>
#include <stdlib.h>
int main(){
    char a[80], *ptr;
    int i;
    //pedindo a frase
    printf("Digite a frase: ");
    fflush(stdin);
    gets(a);
    //obtendo endereco
    ptr=a;
    //descobrir tamanho da frase
    while (*ptr!='\0'){
        i++;
        ptr++;
    }
   //endereco do ultimo digito
    ptr--;
    //imprimindo ordem inversa
	for(;ptr>=a;ptr--)
		if(*ptr >= 97 && *ptr <= 123)
			printf("%c", *ptr - 32);
		else
			printf("%c", *ptr);
    printf("\n");
	system ("pause");
	return (0);
}
