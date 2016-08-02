#include <stdio.h>
#include <stdlib.h>

void lerfrase (char *);
void invertestring (char *, char *);

int main(){
    char a[80], *pti, *ptf;

    lerfrase(a);

    pti=a;
    ptf=a;
    while (*ptf!='\0')
        ptf++;
    ptf--;

	invertestring(pti, ptf);

	printf("%s", a);

	return (0);
}

void lerfrase(char *a){
    printf("Digite a frase: ");
    fflush(stdin);
    gets(a);
}

void invertestring (char *pti, char *ptf){
    char aux;
    if (pti>ptf)
        return ;
    else{
        aux = *pti;
        *pti = *ptf;
        *ptf = aux;
        ptf--;
        pti++;
        invertestring (pti, ptf);
    }
}
