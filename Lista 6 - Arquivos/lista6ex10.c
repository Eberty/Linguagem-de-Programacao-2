#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char placa[20];
    float km, consumo;
}Tcarro;

int main(){
    int op=1;
    Tcarro Carro;
    FILE *Controle;

    if((Controle = fopen("lista6ex10.txt","wb")) == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    while(op!=0){
        printf("Placa: ");
        scanf("%s",&Carro.placa);

        fflush(stdin);
        printf("Kilometragem: ");
        scanf("%f",&Carro.km);

        fflush(stdin);
        printf("Consumo: ");
        scanf("%f",&Carro.consumo);

        fwrite(&Carro,sizeof(Tcarro),1,Controle);

        printf("Existe mais algum carro (Nao-0)? ");
        scanf("%d",&op);
    }

    fclose(Controle);
    return 0;
}
