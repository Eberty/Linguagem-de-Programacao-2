#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[20], ch, *p, *o;
    int i=1;

    //ler string
    printf("Apresente a string: ");
    fflush(stdin);
    fgets (str, 40, stdin);
    //ler char
    printf("Apresente o char: ");
    fflush(stdin);
    ch = getchar();

    p = str;
    while(*p){
        if (tolower(*p) == ch){
            for(o = p; o < str + strlen(str) - i; o++)
				*o = *(o + 1);
			i++;
        }
        p++;
    }
    printf ("%s", str);
    return (0);
}
