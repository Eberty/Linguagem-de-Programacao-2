#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main (){
    char str[50], *p;
    int n=0;
    printf("Digite o que quiser: ");
    fflush(stdin);
    gets(str);

    //obtendo endere�o
    p=str;

    while(*p!= '\0')
    {
        n++;
        p++;
    }
    printf("\nA cadeia de caracteres tem %d caracteres\n",n);
    system ("pause");
    return (0);
}
