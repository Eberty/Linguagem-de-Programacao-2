#include <stdio.h>
#include <stdlib.h>

char * DecimalToBinario (int);

int main(){
    int d;
    printf("Digite o numero decimal: ");
    scanf("%d", &d);

    printf("Numero em binarios: %s\n",DecimalToBinario(d));
    return(0);
}

char * DecimalToBinario (int d){
    char *s;
    int lon=0, base=1, pos;

    while (d >= base){
        lon++;
        base*=2;
    }

    s = malloc ((lon+1)*sizeof(char));
    if (s==NULL){
        printf("Erro!!!\n");
        exit (-1);
    }
    s[lon]='\0';

    pos= lon-1;
    while (d>0){
        if (d%2)
            s[pos]='1';
        else
            s[pos]='0';
        pos--;
        d/=2;
    }
    return s;
}
