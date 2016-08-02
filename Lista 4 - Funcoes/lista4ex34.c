#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct{
    char nome[15], sobrenome[40], setor[12];
}Tdados;

Tdados lerdados (void);
void emailfuncionario(Tdados);

int main(){
    Tdados f;

    f = lerdados();
    emailfuncionario(f);

    printf("\n");
    system ("pause");
    return 0;
}

Tdados lerdados(){
    Tdados ler;
    printf("Apresnete o nome do funcionario: ");
    scanf("%s", &ler.nome);
    printf("Apresente o sobrenome do funcionario: ");
    fflush(stdin);
    gets(ler.sobrenome);
    printf("Apresente o setor do funcionario: ");
    scanf("%s", &ler.setor);

    return ler;
}

void emailfuncionario(Tdados f){
    char *ptr, *cont, email[50], uesc[] = "@uesc.br";

    //iniciais do nome e 1 sobrenome
    ptr = f.nome;
    email[0] = tolower(*ptr);
    ptr = f.sobrenome;
    email[1]= tolower(*ptr);

    //ultimo sobrenome (contagem)
    cont = f.sobrenome;
    while (*ptr != '\0')
        ptr++;
    while ((*ptr != ' ') && (*ptr != *cont))
        ptr--;
    ptr++;

    //inclusao do sobrenome
    cont = &email[2];
    while (*ptr != '\0'){
        *cont = tolower(*ptr);
        ptr++;
        cont++;
    }

    //inclusao do @uesc.br
    ptr = uesc;
    while (*ptr != '\0'){
        *cont = *ptr;
        ptr++;
        cont++;
    }

    *cont = '\0';
    //imprimir
    printf("%s", email);
}
