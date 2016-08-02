#include<stdio.h>
#include<stdlib.h>

typedef struct carro{
    char placa[20];
    float km;
    float consumo;
}Tcarro;

int main(){
    int op=1,aux;
    char VARIAVEL[20];
    Tcarro Carro, Parreco;
    FILE *Controle, *ControleSequencial;

    if((Controle = fopen("lista6ex10.txt","rb")) == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    if((ControleSequencial = fopen("lista6ex11.txt","w")) == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    while(!feof(Controle)){
        fread(&Carro,sizeof(Tcarro),1,Controle);
        printf("%s  ", Carro.placa);
        printf("%.2f  ", Carro.km);
        printf("%.2f \n", Carro.consumo);
    }

    fseek(Controle,-2*sizeof(struct carro),SEEK_CUR);
    fread(&Parreco,sizeof(struct carro),1,Controle);
    printf("x %s ",  Parreco.placa);

    fclose(Controle);
    fclose(ControleSequencial);
    return 0;
}


