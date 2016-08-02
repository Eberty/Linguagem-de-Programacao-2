#include <stdio.h>
#include <stdlib.h>

void lerfrase (char *);
void maiusculas (char *, int *);

int main(){
    char a[80], *ptr;
    int ma=0;

    lerfrase(a);
    ptr=a;

	maiusculas(ptr,&ma);
	printf("Numero de maiusculas: %d", ma);

	return (0);
}

void lerfrase(char *a){
    printf("Digite a frase: ");
    fflush(stdin);
    gets(a);
}

void maiusculas(char *ptr, int *ma){
    if (*ptr == '\0')
        return ;
    else
        if(*ptr >= 65 && *ptr <= 91)
            *ma= *ma +1 ;
    ptr++;
    maiusculas(ptr, ma);
}

