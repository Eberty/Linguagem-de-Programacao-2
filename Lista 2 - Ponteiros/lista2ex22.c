#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char frase[50], *p, *o;

    //ler frase
    printf("Apresente a frase: ");
    fflush(stdin);
    fgets(frase,50,stdin);

    //definindo ponteiros
    p=frase;
    o=frase + strlen(frase) - 2;

    //medindo definindo
    while(o>p){
        if(tolower(*p) != tolower(*o)){
			printf("Nao eh palindromo!\n");
			exit(-1);
		}
		p++;
		o--;
    }
    printf("Eh palindromo\n");
    return (0);
}
