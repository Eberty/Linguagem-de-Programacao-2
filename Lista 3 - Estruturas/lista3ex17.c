#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[15];
    int jg, je, jp, ca, cv, gf, gc, sg, pontos;
}Tequipe;

int main(){
    Tequipe *time;
    int n, i, ganhador, atk, def, fp, *ordem, j, aux;

    //ler numerop de quipes, alocar e verificar
    printf("Numero de equipes: ");
    scanf("%d", &n);
    time = malloc ( n * sizeof(Tequipe) );
    if (time==NULL){
        printf("Erro de alocaçao!!!\n");
        return-1;
    }

    //alocar inteiro (ordem)
    ordem = malloc ( n * sizeof(int) );
    if (ordem==NULL){
        printf("Erro de alocaçao!!!\n");
        return-1;
    }


    //ler dados e verificar
    ganhador = atk = def = fp = 0;
    printf("\nEntrada de dados:\n");

    for (i=0; i<n; i++){
        ordem[i]=i;
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

    //ordenar
    for (i=0; i<n; i++){
        for (j=0; j<n-1; j++)
            if (time[ordem[j]].pontos < time[ordem[j+1]].pontos){
                    aux = ordem[j];
                    ordem[j] = ordem [j+1];
                    ordem[j+1] = aux;
            }
    }

    //apresentar tabela
    system("cls");
    printf("********   Tabela do torneio de futebol de areia   ********");
    printf("\n\nNome\t\tJG   JE   JP   CA   CV   GF   GC   SG   Pontos\n");
    for(i=0;i<n;i++){
        if ( strlen(time[ordem[i]].nome) > 7 )
            printf("%s\t %d %4d %4d %4d %4d %4d %4d %4d %4d\n",
                time[ordem[i]].nome,
                time[ordem[i]].jg,
                time[ordem[i]].je,
                time[ordem[i]].jp,
                time[ordem[i]].ca,
                time[ordem[i]].cv,
                time[ordem[i]].gf,
                time[ordem[i]].gc,
                time[ordem[i]].sg,
                time[ordem[i]].pontos);
        else
            printf("%s\t %9d %4d %4d %4d %4d %4d %4d %4d %4d\n",
                time[ordem[i]].nome,
                time[ordem[i]].jg,
                time[ordem[i]].je,
                time[ordem[i]].jp,
                time[ordem[i]].ca,
                time[ordem[i]].cv,
                time[ordem[i]].gf,
                time[ordem[i]].gc,
                time[ordem[i]].sg,
                time[ordem[i]].pontos);
    }

    printf("\n\nEquipe que ganhou o torneio: %s\n", time[ganhador].nome);
    printf("Equipe com melhor ataque: %s\n", time[atk].nome);
    printf("Equipe com melhor defesa: %s\n", time[def].nome);
    printf("Equipe fair play: %s\n", time[fp].nome);
    free(time);
    free(ordem);
    return(0);
}
