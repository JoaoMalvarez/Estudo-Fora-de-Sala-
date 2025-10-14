/* 1) Um sistema de climatização industrial recebe leituras de temperatura de 20 sensores. 
Para identificar anomalias, é necessário ordenar os valores e verificar os extremos. 
Implemente o Bubble Sort para ordenar os dados e exiba a menor e maior temperatura registrada.
*/ 

#include <stdio.h>

// Usa bubble sort
void bubbleSort(int v[], int n) {
    for (int i = 0; i < n-1; i++) {
        int troca = 0;
        for (int j = 0; j < n-i-1; j++) {
            if (v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                troca = 1;
            }
        }
        // Se não houve trocas,
        //o array já está ordenado
        if (troca == 0)
        break;
    }   
    printf("A maior temperatura foi: %d \n", v[n - 1]);
    printf("A menor temperatura foi: %d \n", v[0]);
}

int main() {
    int temperaturas[20] = {32, 29, 35, 28, 31, 30, 27, 40, 25, 33,
                            36, 26, 39, 37, 38, 24, 34, 23, 22, 21};

    printf("Temperaturas registradas:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", temperaturas[i]);
    }
    printf("\n\n");

    bubbleSort(temperaturas, 20);

    return 0;
}