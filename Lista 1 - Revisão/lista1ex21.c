#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
  int eleit=0,fabi=0,luci=0, adri=0,opcao,nulo=0, branco=0;
  char resposta='c';
  while(resposta!= 'f')
  {
    printf("\n\n\nSe for votar em branco digite '0'\nSe for  votar na Fabiana digite '1'\nSe for votar no Adriano digite '2'\nSe for votar na Luciana digite '3' \nQualquer outra opcao o voto sera anulado\n");
    printf("\nApresente a opcao escolhida: ");
    fflush(stdin);
    scanf("%d",&opcao);
    if(opcao==0)
    {
        nulo++;
        printf("Voto em branco");
    }
    if(opcao==1)
    {
        fabi++;
        printf("Voto na Fabiana");
    }
    if(opcao==2)
    {
        adri++;
        printf("Voto no Adriano");
    }
    if(opcao==3)
    {
        luci++;
        printf("Voto na luciana");
    }
    if(opcao!=0&&opcao!=1&&opcao!=2&&opcao!=3)
    {
          printf("Voto invalido");
    }
    eleit++;
    printf("\nPara finalizar a votacao digite 'f', continue apertando outra tecla e enter: ");
    fflush(stdin);
    scanf("%c",&resposta);
  }
    printf("\n\nVotacao encerrada... Computando os votos\n");
    printf("\nVotos em branco: %d", branco)
    printf("")
    if(luci>adri&&luci>fabi)
        printf("A candidata Luciana foi a vencedora com %d votos",luci);
    else
        if(adri>luci&&adri>fabi)
            printf("O candidato Adriano foi a vencedora com %d votos",adri);
        else
            if(fabi>adri&&fabi>luci)
                printf("A candidata Fabiana foi a vencedora com %d votos",fabi);
                else
                        printf("Empates não sao permitidos");
    return (0);
}
