/*  2) Um sistema de seleção de vagas precisa ordenar a idade dos candidatos para priorizar 
aqueles com mais experiência. Usando o Insertion Sort, ordene um vetor com as idades de 15 candidatos 
e exiba o top 5 dos candidatos mais velhos. */
#include <stdio.h>

void InsertionSort(int v[], int n) {
    for (int i = 0; i < n; i++) {
        int Key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > Key) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = Key;
    }
}

int main() {
    int idades[15] = {23, 45, 31, 19, 52, 28, 34, 40, 27, 50, 38, 22, 30, 46, 41};
    int n = 15;

    printf("Idades dos candidatos:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", idades[i]);
    }
    printf("\n\n");

    InsertionSort(idades, n);

    printf("Top 5 candidatos mais velhos:\n");
    for (int i = n - 1; i >= n - 5; i--) {
        printf("%d ", idades[i]);
    }
    printf("\n");

    return 0;
}