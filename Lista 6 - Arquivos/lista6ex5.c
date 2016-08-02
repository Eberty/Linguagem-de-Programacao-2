#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char desc[255];
    int cod, q;
    float valor;
}Tvenda;

int main(){
    Tvenda prod;
    FILE *arquivo;
    char x[30];
    int ttotal=0, uni=0, puni, pdin;
    float din=0, saldo=0;

    if ((arquivo = fopen("lista6ex4.txt", "r")) == NULL){
        printf("Erro!!!\n");
        exit(1);
    }

    while(!feof(arquivo)){
        fgets(x, 30, arquivo);
        fscanf(arquivo, "%d", &prod.cod);
        fscanf(arquivo, "%s", &prod.desc);
        fscanf(arquivo, "%d", &prod.q);
        fscanf(arquivo, "%f", &prod.valor);
        fscanf(arquivo, "\n");

        ttotal++;
        saldo+=prod.valor;

        if (prod.q > uni){
            uni = prod.q;
            puni = prod.cod;
        }

        if (prod.valor > din){
            din = prod.valor;
            pdin = prod.cod;
        }
    }
    printf("Produto de maior lucro foi %d com %.2f reais\n", pdin, din);
    printf("Mais Pecas Vendidas foi %d com %d pecas\n", puni, uni);
    printf("Saldo: %.2f\n", saldo);
    printf("O numero de transacoes: %d\n", ttotal);

    fclose(arquivo);
    return 0;
}
