#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, n;
    float *v, soma=0;
    FILE *vetor;

    if((vetor = fopen("lista6ex8.txt","rb")) == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    fread(&n,sizeof(int),1,vetor);
    v = malloc(n * sizeof(float));
    if (v==NULL){
        printf("Erro!\n");
        exit (-1);
    }

    fread(v,sizeof(float),n,vetor);

    for(i=0;i<n;i++){
        soma+=v[i];
        printf("%.2f\n",v[i]);
    }
    printf("Soma: %.2f",soma);
    fclose(vetor);
}
