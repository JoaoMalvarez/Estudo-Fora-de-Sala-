#include <stdio.h>

    int main() {
    int numero, soma = 0, contador = 0;
    float media;
    printf("Digite somente números inteiros positivos.\n");
    printf("Para terminar, digite um número negativo.\n");
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);
        if (numero < 0) { break; }
        soma += numero;
        contador++;
    }

    if (contador > 0) {
        media = (float)soma / contador;
        printf("A média dos números inseridos é: %.2f\n", media);
    } else {
        printf("Nenhum número positivo foi inserido.\n");
    }
    return 0;
}