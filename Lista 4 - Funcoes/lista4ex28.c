#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int palindromo (void);

int main(){
    int ret;

    ret = palindromo();
    if (ret==1)
        printf("Frase não eh palindromo\n");
    else
        printf("Palindromo\n");

    return (0);
}

int palindromo (void){
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
			return 1;
		}
		p++;
		o--;
    }
    return 0;
}
