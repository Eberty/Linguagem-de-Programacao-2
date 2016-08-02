#include<ctype.h>
#include<stdio.h>
#include<string.h>

int main(){
    char pa[10], sent[80], *p, *o;
    int rep=0, i, aux;

    //ler
    printf("Apresente a sentenca: ");
    fflush(stdin);
    fgets(sent,80,stdin);
    printf("Apresente a palavra: ");
    fflush(stdin);
    scanf("%s", pa);

    // Verificando se a Sentenca eh maior que a String
	if(strlen(sent) < strlen(pa)){
		printf("'%s' aparece 0 vezes em '%s'", pa, sent);
		return 0;
	}

    // Fechando as Strings
	p = pa;
	*(p + strlen(pa)) = '\0';
	p = sent;
	*(p + strlen(sent) - 1) = '\0';

	//percorrer matriz
	while(*p){
        for (o=p, i=0, aux=0; i<strlen(pa);i++,o++)
            if(tolower(pa[i]) == tolower(*o))
				aux++;
			else
				break;

            if (aux == strlen(pa))
                rep++;
        p++;
	}
	printf("\n'%s' aparece %d vezes em %s", pa, rep, sent);

	return 0;
}
