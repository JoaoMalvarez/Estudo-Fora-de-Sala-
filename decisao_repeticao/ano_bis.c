#include <stdio.h>

int main() {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("É um ano bissexto.");
    } else {
        printf("Não é um ano bissexto.");
    }
    return 0;
}