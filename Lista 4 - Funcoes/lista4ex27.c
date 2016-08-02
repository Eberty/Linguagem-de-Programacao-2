#include <stdio.h>
#include <stdlib.h>

int verificaAnagrama (const char *, const char *);

int main(){
    int res;
    char s1[20], s2[20];
    printf("Digite a primeira string: ");
    gets(s1);
    printf("Digite a segunda string: ");
    gets(s2);

    res = verificaAnagrama(s1, s2);

    if (res == 1)
        printf("Anagrama\n");
    else
        printf("Nao anagrama\n");

    return 0;
}

int verificaAnagrama (const char *s1, const char *s2){
    char *p1, *p2;
    int tam=0;

    p1 = s1;
    p2 = s2;

    while (*p2 != '\0'){
        p2++;
        tam++;
    }
    p2--;

    while (*p1!='\0' && tam>0){
        if (*p1 != *p2)
            return 0;
        p1++;
        p2--;
        tam--;
    }

    if (*p1!='\0' || tam!=0)
        return 0;
    else
        return 1;
}
