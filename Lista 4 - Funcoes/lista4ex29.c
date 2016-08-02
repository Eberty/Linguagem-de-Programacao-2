#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void removerchar (char *, char);

int main(){
    char str[20], ch;

    //ler string
    printf("Apresente a string: ");
    fflush(stdin);
    fgets (str, 40, stdin);
    //ler char
    printf("Apresente o char: ");
    fflush(stdin);
    ch = getchar();

    removerchar(str, ch);

    printf ("%s", str);
    return (0);
}

void removerchar (char *str, char ch){
    char *p, *o;
    int i = 1;
    p = str;
    while(*p){
        if (tolower(*p) == tolower(ch)){
            for(o = p; o < str + strlen(str) - i; o++)
                *o = *(o + 1);
            i++;
        }
        p++;
    }
}
