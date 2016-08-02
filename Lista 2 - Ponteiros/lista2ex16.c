#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char str[50],*aux;
    int vogal=0, digito=0, branco=0, v[5]={}, i;
    printf("Digite alguma frase :");
    gets(str);
    aux = str;
    while(*aux)
    {
        if(tolower(*aux)=='a'||tolower(*aux)=='e'||tolower(*aux)=='i'||tolower(*aux)=='o'||tolower(*aux)=='u'){
                vogal++;
            if (tolower(*aux)=='a')
                v[0]++;
            if (tolower(*aux)=='e')
                v[1]++;
            if (tolower(*aux)=='i')
                v[2]++;
            if (tolower(*aux)=='o')
                v[3]++;
            if (tolower(*aux)=='u')
                v[4]++;
        }
            if(*aux=='\n'||*aux=='\t'||*aux==' ')
            branco++;
        digito++;
        aux++;
    }
    printf("Numero digitos: %d", digito);

    printf("\nNumero vogais: %d", vogal);
    printf("\na: ");
    for (i=0;i<v[0];i++)
         printf("*");
    printf("\ne: ");
    for (i=0;i<v[1];i++)
         printf("*");
    printf("\ni: ");
    for (i=0;i<v[2];i++)
        printf("*");
    printf("\no: ");
    for (i=0;i<v[3];i++)
        printf("*");
    printf("\nu: ");
    for (i=0;i<v[4];i++)
        printf("*");
    printf("\n");
    printf("\nNumero espacos em branco: %d\n", branco);
    system("pause");
    return (0);
}
