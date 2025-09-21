#include <stdio.h>

int main() {
    int numero;
    do {
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &numero);
    } while (numero >= 0);
    printf("Você digitou um número negativo. Programa encerrado.\n");
    return 0;
}