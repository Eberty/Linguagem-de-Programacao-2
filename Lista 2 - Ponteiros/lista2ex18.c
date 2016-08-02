#include <stdio.h>
#include <stdlib.h>
int main(){
    int *num, n, i, aux, j, cont;

    //vetor
    printf ("Apresnete quantos numeros deseja: ");
    scanf ("%d", &n);
    if(n < 2)
		exit(-1);
    num = malloc (n * sizeof(int));
    if (num==NULL){
        printf("Erro de alocaçao!!!");
        return -1;
    }

    //pedir valores
    for (i=0; i<n; i++){
        printf ("Informe o valor %d: ", i);
        scanf ("%d", (num+i));
    }

    //ordenar
    for (i=0; i<n; i++)
        for (j=0; j<n; j++){
            if (j+1<n)
                if (num[j]>num[j+1]){
                    aux=num[j];
                    num[j]=num[j+1];
                    num[j+1]=aux;
                }
       }

	// perguntar
    for (i=0; i<n; i++){
        cont=1;
        while (num[i]==num[i+1]){
            cont++;
            i++;
        }
        if (cont==1){
            aux=num[i];
            printf("%d nao se repete\n", aux);
        }
    }

	free(num);
	system ("pause");
	return (0);
}
