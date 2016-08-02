#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[50],*aux;
    int c=0;
    printf("Digite alguma frase :");
    gets(str);
    aux = &str;
    while(*aux!='\0')
    {
        if(*aux=='c')
            c++;
        aux++;
    }
    printf("Numero de vezes q c apareceu: %d\n", c);
    system("pause");
    return (0);
}
