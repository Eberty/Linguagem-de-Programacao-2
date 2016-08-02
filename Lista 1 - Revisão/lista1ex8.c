#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float moch=25, isq=2,chi=7,fatura=0;
    int i=0,j=0,k=0;
    printf("Bem vindo ao gerenciador de vendas");
    printf("\n\nQual foi a quantidade de mochilas vendidas? ");
    scanf("%d",&i);
    moch*=i;
    printf("Qual foi a quantidade de chinelos vendidos? ");
    scanf("%d",&j);
    chi*=j;
    printf("Qual foi a quantidade de isqueiros vendidos? ");
    scanf("%d",&k);
    isq*=k;
    fatura=moch+isq+chi;
    printf("\n\nO valor total de venda de mochilas foi %.2f",moch);
    printf("\nO valor total de venda de chinelos foi: %.2f",chi);
    printf("\nO valor total de venda de isqueiros foi: %.2f",isq);
    printf("\nO faturamento total do dia foi: %.2f",fatura);
    return(0);
}
