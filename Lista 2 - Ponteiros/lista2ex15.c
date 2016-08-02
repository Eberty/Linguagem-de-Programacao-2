#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[50],*aux;
    int vogal=0, digito=0, branco=0;
    printf("Digite alguma frase :");
    fflush(stdin);
    gets(str);
    aux = str;
    while(*aux!='\0')
    {
        if(tolower(*aux)=='a'||tolower(*aux)=='e'||tolower(*aux)=='i'||tolower(*aux)=='o'||tolower(*aux)=='u')
            vogal++;
        else
            if(*aux=='\n'||*aux=='\t'||*aux==' ')
                branco++;
        digito++;
        aux++;
    }
    printf("Numero digitos: %d\n", digito);
    printf("Numero vogais: %d\n", vogal);
    printf("Numero espacos em branco %d\n", branco);
    system("pause");
    return (0);
}
