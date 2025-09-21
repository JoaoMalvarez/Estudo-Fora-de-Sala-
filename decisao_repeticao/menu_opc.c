#include <stdio.h>

int main() {
    int opcao;
    do {
        printf("\nMenu de Opções:\n");
        printf("1. Opção 1\n2. Opção 2\n3. Opção 3\n4. Sair\n Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: printf("Você escolheu a Opção 1.\n"); break;
            case 2: printf("Você escolheu a Opção 2.\n"); break;
            case 3: printf("Você escolheu a Opção 3.\n"); break;
            case 4: printf("Saindo do programa...\n"); break;
            default: printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);
    return 0;
}