#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia, mes, ano;
    } Tdata;

int main (){
    Tdata n1, n2, jovem;

    printf("Apresente o nascimento da pessoa 1:\n");
    scanf("%d%d%d", &n1.dia, &n1.mes, &n1.ano);
    printf("Apresente o nascimento da pessoa 2:\n");
    scanf("%d%d%d", &n2.dia, &n2.mes, &n2.ano);

    if (n1.ano>n2.ano)
        jovem=n2;
    else
        if (n1.ano<n2.ano)
            jovem=n1;
        else
            if (n1.mes>n2.mes)
                jovem=n2;
            else
                if (n1.mes<n2.mes)
                    jovem=n1;
                else
                    if (n1.dia>n2.dia)
                        jovem=n2;
                    else
                        if (n1.dia<n2.dia)
                            jovem=n1;
                        else //((n1.dia==n2.dia) && (n1.mes==n2.mes) && (n1.ano==n2.ano));
                            printf("\nPessoas nasceram no mesmo dia:");
    printf("\nO mais jovem nasceu dia %02d/%02d/%04d \n", jovem.dia, jovem.mes, jovem.ano);
    return 0;
}
