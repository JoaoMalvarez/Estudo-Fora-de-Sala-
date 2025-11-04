#include <stdio.h>
#include <string.h>

// Merge Sort


void merge(int v[], int esq, int dir, int m) {
    int n1 = m - esq + 1;
    int n2 = dir - m;
    int ESQ[n1], DIR[n2];
    for (int i = 0; i < n1; i++) {
        ESQ[i] = v[esq + 1];
    }
    for (int j = 0; j < n2; j++) {
        DIR[j] = v[m + 1 + j];
    }
    int i = 0, j = 0, k = esq;
    while (i < n1 && j < n2) {
        if (ESQ[i] <= DIR[j]) {
            v [k] = ESQ[i];
            i++;
        } else {
            v[k] = DIR[j];
            j++;
        }
        k++;
    }
}

void mergeSort (int v[], int esq, int dir) {
    if (esq < dir) {
        int meio = esq + (dir - esq) / 2;
        mergeSort(v, esq, meio);
        mergeSort(v, meio + 1, dir);
        merge(v, esq, meio, dir);
    }
}

// Quick Sort

int particionar(int v[], int inicio, int fim, int indice_pivo) {
    int pivo = v[indice_pivo]; 
    int esquerda = inicio;
    int direita = fim - 1;
    while (esquerda <= direita) {
        while (esquerda <= direita && v[esquerda] <= pivo){
            ++esquerda;
        }
        while (esquerda <= direita && v[direita] >= pivo) {
            --direita;
        }
        if (esquerda < direita) {
            int temp = v[esquerda];
            v[esquerda] = v[direita];
            v[direita] = temp;
        }
    }
    int nova_pos_pivo = esquerda;
    int temp = v[nova_pos_pivo];
    v[nova_pos_pivo] = v[indice_pivo];
    v[indice_pivo] = temp;
    return nova_pos_pivo;
}

void quickSort (int v[], int inicio, int fim) {
    if (inicio >= fim) {
        return;
    }
    int indice_pivo = fim;
    indice_pivo = particionar(v, inicio, fim, indice_pivo);
    quickSort(v, inicio, indice_pivo -1);
    quickSort(v, indice_pivo + 1, fim);
}


// Main para testes

int main() {
    int vetor1[] = {10, 7, 8, 9, 1, 5};
    int tamanho1 = sizeof(vetor1) / sizeof(vetor1[0]);
    mergeSort(vetor1, 0, tamanho1 - 1);
    printf("Vetor ordenado com Merge Sort: ");
    for (int i = 0; i < tamanho1; i++) {
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    int vetor2[] = {10, 7, 8, 9, 1, 5};
    int tamanho2 = sizeof(vetor2) / sizeof(vetor2[0]);
    quickSort(vetor2, 0, tamanho2 - 1);
    printf("Vetor ordenado com Quick Sort: ");
    for (int i = 0; i < tamanho2; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    return 0;
}