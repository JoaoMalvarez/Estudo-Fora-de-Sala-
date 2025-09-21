#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    double num1, num2, resultado;
    printf("Escolha a operação (+, -, *, /, ^, r): ");
    scanf(" %c", &operacao);
    if (operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/' ) {
        printf("Digite dois números: ");
        scanf("%lf %lf", &num1, &num2);
        if (operacao == '+') {
            resultado = num1 + num2;
        } else if (operacao == '-') {
            resultado = num1 - num2;
        } else if (operacao == '*') {
            resultado = num1 * num2;
        } else if (operacao == '/') {
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("ERRO!! Divisão por zero!\n");
                return 1;
            }
    }} else if (operacao == '^') {
        printf("Digite a base e o expoente: ");
        scanf("%lf %lf", &num1, &num2);
        resultado = pow(num1, num2);
    } else if (operacao == 'r') {
        printf("Digite o número: ");
        scanf("%lf", &num1);
            if (num1 >= 0) {
                resultado = sqrt(num1);
            } else {
                printf("ERRO!! Raiz quadrada de número negativo!\n");
                return 1;
            }
    } else {
        printf("Operação inválida!\n");
        return 1;
    }
    printf("Resultado: %.2lf\n", resultado);
    return 0;
}