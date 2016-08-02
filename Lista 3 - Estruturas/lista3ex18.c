#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct item{
    char nome[255];
    char telefone[13];
    struct item *ptr;
} Titem;

int main (){
    Titem *pessoa, *raiz = NULL;
    char nome[255];

    printf("Entrada de Dados\n");
    printf("Digite o nome da Pessoa (0 para finalizar):");
    gets(nome);

    while(nome[0]!='0'){
        if (raiz == NULL){
            raiz = malloc(sizeof(Titem));
            pessoa = raiz;
        }
        else{
        pessoa->ptr = malloc(sizeof(Titem));
        pessoa = pessoa->ptr;
        }
        if (pessoa == NULL){
            printf("Erro: Memoria insufuciente.\n");
            return -1;
        }
        pessoa->ptr = NULL;
        strcpy(pessoa->nome, nome);
        printf("Digite o numero de telefone: ");
        fflush(stdin);
        gets(pessoa->telefone);
        printf("Digite o nome da Pessoa (0 para finalizar):");
        fflush(stdin);
        gets(nome);
    }

    if (raiz != NULL){
        printf("\nSaida de dados\n");
        while(raiz != NULL){
            pessoa = raiz;
            printf("Nome: %10s   Tel: %3s\n", pessoa->nome, pessoa->telefone);
            raiz = pessoa->ptr;
            free(pessoa);
        }
    }

    system("PAUSE");
    return 0;
}
