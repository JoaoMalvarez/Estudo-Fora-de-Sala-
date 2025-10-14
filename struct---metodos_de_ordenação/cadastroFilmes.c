/* 4) Crie uma struct Filme com título, gênero, ano e duração. 
Permita o cadastro de 5 filmes e exiba os que têm mais de 2h de duração.*/

#include <stdio.h>
#include <string.h>
#define TAM 5

typedef struct {
    char titulo [100];
    char genero [100];
    int ano;
    int duracao;
} Filme; 

void selectionSort(Filme v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if(v[j].duracao > v[max_idx].duracao) {
                max_idx = j;
            }
        }
        if(max_idx != i) {
            Filme temp = v[max_idx];
            v[max_idx] = v[i];
            v[i] = temp;
        }
    }
}

int main() {
    Filme filmes[TAM] = {
        {},
        {},
        {},
        {},
        {},
    };

    printf("---Cadastre seus Filmes---\n");
    printf("Cadastre 5 filmes:\n");
    for (int i = 0; i < 5; i++) {

        printf("Filme %d", i + 1);

        printf("\n\nTítulo: ");
        scanf("%s", filmes[i].titulo);

        printf("\nGênero: ");
        scanf("%s", filmes[i].genero);        

        printf("\nAno de lançamento: ");
        scanf("%d", &filmes[i].ano);       

        printf("\nDuração do filme (em minutos): ");
        scanf("%d", &filmes[i].duracao);
        printf("\n");
    }
    selectionSort(filmes, TAM);
    printf("\n\nFilmes com mais de 2 horas de duração:\n\n");
        int encontrou = 0;
        for (int i = 0; i < TAM; i++) {
            if (filmes[i].duracao >= 120) {
                printf("Título: %s\n", filmes[i].titulo);
                printf("Gênero: %s\n", filmes[i].genero);
                printf("Ano: %d\n", filmes[i].ano);
                printf("Duração: %d minutos\n\n", filmes[i].duracao);
                encontrou = 1;
            }
        }
        if (!encontrou) {
            printf("Nenhum filme com mais de 2 horas de duração.\n");
        }
        return 0;
}