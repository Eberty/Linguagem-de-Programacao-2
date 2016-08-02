#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int cont (char *, char *);

int main(){
    char str[20], *ptr;
    gets(str);
    ptr = &str[strlen(str) - 1];
    cont (str,ptr);
}

int cont (char *n, char *p){
    if (p<n)
        return 1;
    if (*p != *n)
        return 0;
    return cont(++n, --p);
}
