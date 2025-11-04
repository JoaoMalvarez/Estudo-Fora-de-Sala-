/* Crie um programa que peça ao usuário para inserir um número inteiro. O programa
deve dobrar o valor desse número usando uma função que recebe um ponteiro.*/

#include <stdio.h>
#include <string.h>


int main () {
    printf("Digite um número inteiro: ");
    int valor;
    scanf("%d", valor);
    int *ptr = &valor;
    printf("O dobro do valor é: %d\n", *ptr * 2);
    return 0;
}