#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    char desc[255];
    int cod, q;
    float valor;
}Tvenda;

int main(){
    time_t tempo;
    struct tm *tempoinfo;
    int continua=1;
    Tvenda trans;
    FILE *arquivo;

    if ((arquivo = fopen("lista6ex4.txt", "a"))== NULL){
        printf("Erro!!!\n");
        exit(1);
    }

    while (continua != 0){
        tempo = time(NULL);
        tempoinfo = localtime(&tempo);
        fprintf(arquivo, "%s", asctime(tempoinfo));

        printf("Codigo numerico do produto: ");
        scanf("%d", &trans.cod);
        fprintf(arquivo, "%7d", trans.cod);

        printf("Descricao do produto: ");
        fflush(stdin);
        gets(trans.desc);
        fprintf(arquivo, "%7s", trans.desc);

        printf("Quantidade vendida: ");
        scanf("%d", &trans.q);
        fprintf(arquivo, "%7d", trans.q);

        printf("Valor total: ");
        scanf("%f", &trans.valor);
        fprintf(arquivo, "%7.2f\n", trans.valor);


        printf("Deseja continuar(0 para nao - outro valor para sim)?");
        scanf("%d", &continua);
    }


    fclose(arquivo);
    return 0;
}
