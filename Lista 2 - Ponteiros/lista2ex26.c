#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, *vetor, i, elem, tam = 0, j, k, aux;

    //ler e alocar
	printf("Dimensao do vetor: ");
	scanf("%d", &n);
	vetor = malloc(n * sizeof(int));
	if(vetor == NULL){
		printf("Erro!!! Memoria esgotada!\n");
		exit(-1);
	}
    printf("\n");

	// pedir elemento (enchendo vetor)
	for(i = 0; i < n; i++){
		printf("Elemento %d: ", i);
		scanf("%d", &elem);
		// Caso i==0
		if(i == 0){
			vetor[i] = elem;
			tam++;
			printf("%d\n\n", vetor[i]);
			continue;
		}
		//caso (i>0)
		for(j=0; j<tam; j++){
			if(vetor[j] >= elem){
				for(k=tam; k>=j; k--){
					vetor[k] = vetor[k - 1];
				}
				vetor[j] = elem;
				break;
			}else if(j + 1 == tam){
				vetor[tam] = elem;
				break;
			}
		}
		tam++; //tamanho para entrar o prox
		for(j=0; j<tam; j++){   // Mostrando ordenado a cada novo
			if(j + 1 == tam)
				printf("%d\n\n", vetor[j]);
			else
				printf("%d, ", vetor[j]);
		}
	}
	free(vetor);
	return (0);
}
