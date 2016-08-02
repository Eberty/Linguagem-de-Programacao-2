#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i, n;
    float *v;
    FILE *vetor;

    if((vetor = fopen("lista6ex8.txt","wb")) == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    printf("Elementos do vetor: ");
    scanf("%d",&n);
    v = malloc(n * sizeof(float));
    if (v==NULL){
        printf("Erro!\n");
        exit (-1);
    }

    srand(time(NULL));
    for(i=0;i<n;i++)
        v[i]=rand()%100;

    fwrite(&n,sizeof(int),1,vetor);
    fwrite(v,sizeof(float),n,vetor);
    fclose(vetor);
    free(v);
    return 0;
}
