/*  Desafio: Escreva uma função recursiva bool is_palindrome(char str[]) que recebe uma string e
retorna true se a string informada é um palíndromo(*) ou false caso contrário.
• A verificação do palíndromo deve ser feita, obrigatoriamente, de forma recursiva.
• O código pode assumir que a string passada como argumento não tem acentos, sinais de
pontuação e outros símbolos/caracteres especiais. Assim, "Olá, galo!" não precisa ser
considerada palíndromo pelo seu código, mas "Ola galo", sim.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool is_palindrome_recursive(char str[], int inicio, int fim) {
    if (inicio >= fim)
        return true;

    // Ignora espaços em branco
    if (str[inicio] == ' ')
        return is_palindrome_recursive(str, inicio + 1, fim);
    if (str[fim] == ' ')
        return is_palindrome_recursive(str, inicio, fim - 1);

    // Compara letras minúsculas (para ignorar maiúsculas/minúsculas)
    if (tolower(str[inicio]) != tolower(str[fim]))
        return false;

    return is_palindrome_recursive(str, inicio + 1, fim - 1);
}

// Função principal chamada pelo usuário
bool is_palindrome(char str[]) {
    int len = strlen(str);
    return is_palindrome_recursive(str, 0, len - 1);
}

// Exemplo de uso
int main() {
    char frase[100];
    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    printf("\"%s\" -> %s\n", frase, is_palindrome(frase) ? "Palindromo" : "Não é um palindromo");
    return 0;
}