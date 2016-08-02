#include <stdio.h>
#include <stdlib.h>
int main (void){
	system ("color f0");
    int i, n;
    float a[100]={}, b[100]={};
    printf ("Apresente quantas posisoes quer que tenha o vetor: ");
    scanf ("%d", &n);
    if (n>=100)
        printf ("\nErro!!!\nConsidere n<100\n");
    else{
        for (i=0;i<n;i++){
            printf ("Apresente elemento %d do vetor: ", i+1);
            scanf ("%f", &a[i]);
            b[n-i-1]=a[i];
        }
        for (i=0;i<n;i++){
            printf ("\nNovo elemento %d do vetor: %.1f", i+1, b[i]);
        }
    }
    printf ("\n");
	system ("pause");
	return(0);
}
