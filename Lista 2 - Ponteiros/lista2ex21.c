#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char str[80], sub[2], *p;
    int i=0, v=0;

    //receber frase e substring
    printf("Insira uma frase: ");
    fflush(stdin);
    fgets(str, 80, stdin);

    // gets nao funciona??????

    printf("Substring (2 caracteres): ");
    setbuf(stdin, NULL);
    scanf ("%s", sub);
    // ver tamanho - verificaçao
	if(strlen(sub) != 2)
		exit(-1);
    //endereco
    p=str;
    //verificaçao
    for (i=0; i<80; i++){
        if (*str == *(p + i)  && *(str + 1) == *(p + i + 1))
            v++;
    }
    printf ("O numero de veses que %s aparece na frase eh: %d\n", sub, v);
    system ("pause");
    return(0);
}
