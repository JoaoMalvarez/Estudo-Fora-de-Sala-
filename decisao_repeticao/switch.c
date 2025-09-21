#include <stdio.h>

int main() {
    int opcao;
    double valor, resultado;
    printf("Bem-vindo ao Conversor de Unidades!\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("1. Converter Celsius para Fahrenheit\n");
    printf("2. Converter Metros para Quilômetros\n");
    printf("3. Converter Gramas para Quilogramas\n");
    printf("4. Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: printf("Digite a temperatura em Celsius: ");
        scanf("%lf", valor);
        resultado = (valor * 9/5) + 32;
        printf("%.2lf Celsius é o equivalente à %.2lf em Fahrenheit\n", valor, resultado);
        break;
        case 2: printf("Digite a distância em Metros: ");
        scanf("%lf", valor);
        resultado = valor / 1000;
        printf("%.2lf Metros é o equivalente à %.2df em Quilômetros\n", valor, resultado);
        break;
        case 3: printf("Digite o peso em Gramas: ");
        scanf("%lf", valor);
        resultado = valor / 1000;
        printf("%.2lf Gramas é o equivalente à %.2lf Quilogramas");
        break;
        case 4: printf("Saindo do programa. Obrigado por usar o Conversor de Unidades!\n");
        break;
        default: printf("Opção inválida! Por favor, escolha uma opção entre 1 e 4.\n");
    }