#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia, mes, ano;
    } Tdata;

int main (){
    Tdata *pessoa, *ptr, *jovem;
    int i, n;

    //ler numero de pessoas e alocar
    printf("Numero de pessoas: ");
    scanf("%d", &n);
    pessoa = malloc (n * sizeof(Tdata));
    if (pessoa == NULL){
        printf("Erro de alocacao!!!\n");
        return -1;
    }

    //apresentar as datas e procurar o mais jovem
    jovem = pessoa;
    ptr = pessoa;
    for (i=0; i<n; i++, ptr++){
        printf("\nApresente o nascimento (dd/mm/aa) da pessoa %d:\n", i+1);
        scanf("%d%d%d", &ptr->dia, &ptr->mes, &ptr->ano);
        if ((ptr->ano) > (jovem->ano))
            jovem=ptr;
        else
            if ((ptr->ano) < (jovem->ano))
                jovem=ptr;
            else
                if ((ptr->mes) > (jovem->mes))
                    jovem=ptr;
                else
                    if ((ptr->mes) < (jovem->mes))
                        jovem=ptr;
                    else
                        if ((ptr->dia) > (jovem->dia))
                            jovem=ptr;
                        else
                            if ((ptr->dia) < (jovem->dia))
                                jovem=ptr;
    }
    printf("\nO mais jovem nasceu dia %02d/%02d/%04d \n", jovem->dia, jovem->mes, jovem->ano);
    free(pessoa);
    return 0;
}
