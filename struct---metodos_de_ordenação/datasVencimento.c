/*  3) Um supermercado quer organizar os produtos por data de vencimento (representada por números 
inteiros YYYYMMDD). Implemente o Selection Sort para ordenar um vetor com 12 datas de vencimento
e identifique os produtos que devem ser vendidos primeiro (top 3 mais próximos). */

#include <stdio.h>

void SelectionSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for(int j = i + 1; j < n; j++) {
            if (v[j] < v[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int temp = v[min_idx];
            v[min_idx] = v[i];
            v[i] = temp;
        }
    }
}

int main() {
    int datas[12] = {
        20251012, 20251103, 20250928, 20251215,
        20250830, 20251125, 20251005, 20250719,
        20250910, 20251030, 20251201, 20250825
    };
    int n = 12;

    SelectionSort(datas, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", datas[i]);
    }
    printf("\n\n");

    printf("Os produtos que precisam ser vendidos mais rapidos são: \n");
    for (int i = 0; i < 3; i++) {
        printf("%d", datas[i]);
        printf("\n");
    }
    return 0;
}