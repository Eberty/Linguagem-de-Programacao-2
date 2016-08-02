#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[15];
    int jg, je, jp, ca, cv, gf, gc, sg, pontos;
}Tequipe;

int main(){
    Tequipe *time;
    int n, i, ganhador, atk, def, fp;

    //ler numerop de quipes, alocar e verificar
    printf("Numero de equipes: ");
    scanf("%d", &n);
    time = malloc ( n * sizeof(Tequipe) );
    if (time==NULL){
        printf("Erro de alocaçao!!!\n");
        return-1;
    }


    //ler dados e verificar
    ganhador = atk = def = fp = 0;
    printf("Entrada de dados\n");

    for (i=0; i<n; i++){
        printf("\nNome da equipe: ");
        fflush(stdin);
        gets(time[i].nome);

        printf("Jogos ganhos: ");
        scanf("%d", &time[i].jg);
        printf("Jogos empatados: ");
        scanf("%d", &time[i].je);
        time[i].pontos = time[i].jg*3 + time[i].je*1;
        printf("Jogos perdidos: ");
        scanf("%d", &time[i].jp);
        if (time[i].pontos > time[ganhador].pontos)
            ganhador = i;

        printf("Cartoes amarelos: ");
        scanf("%d", &time[i].ca);
        printf("Cartoes vermelhos: ");
        scanf("%d", &time[i].cv);
        if ((time[i].cv*2 + time[i].ca*1)  < (time[fp].cv*2 + time[fp].ca*1))
            fp = i;

        printf("Gols a favor: ");
        scanf("%d", &time[i].gf);
        if (time[i].gf > time[atk].gf)
            atk = i;
        printf("Gols contra: ");
        scanf("%d", &time[i].gc);
        if (time[i].gc < time[def].gc)
            def = i;
        time[i].sg = time[i].gf - time[i].gc;
    }

    printf("\n\n\nEquipe que ganhou o torneio: %s\n", time[ganhador].nome);
    printf("Equipe com melhor ataque: %s\n", time[atk].nome);
    printf("Equipe com melhor defesa: %s\n", time[def].nome);
    printf("Equipe fair play: %s\n", time[fp].nome);
    free(time);
    return(0);
}
