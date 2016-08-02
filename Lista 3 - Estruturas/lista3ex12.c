#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia, mes, ano;
    } Tdata;

typedef struct{
    char nome[15];
    Tdata nas;
    } Tpessoa;

int main (){
    Tpessoa n1, n2, jovem;

    printf("Nome das duas pessoas que irao passar pelo teste:\n");
    scanf("%s %s", &n1.nome, &n2.nome);
    printf("\n\n");
    printf("Apresente o nascimento (dd/mm/aaaa) de %s:\n", n1.nome);
    scanf("%d%d%d", &n1.nas.dia, &n1.nas.mes, &n1.nas.ano);
    printf("Apresente o nascimento (dd/mm/aaaa) de %s:\n", n2.nome);
    scanf("%d%d%d", &n2.nas.dia, &n2.nas.mes, &n2.nas.ano);

    if (n1.nas.ano>n2.nas.ano)
        jovem=n2;
    else
        if (n1.nas.ano<n2.nas.ano)
            jovem=n1;
        else
            if (n1.nas.mes>n2.nas.mes)
                jovem=n2;
            else
                if (n1.nas.mes<n2.nas.mes)
                    jovem=n1;
                else
                    if (n1.nas.dia>n2.nas.dia)
                        jovem=n2;
                    else
                        if (n1.nas.dia<n2.nas.dia)
                            jovem=n1;
                        else
                            printf("\nAs 2 pessoas nasceram no mesmo dia:");
    printf("\n%s eh a pessoa mais nova e nasceu dia %02d/%02d/%04d \n", jovem.nome, jovem.nas.dia, jovem.nas.mes, jovem.nas.ano);
    return 0;
}
