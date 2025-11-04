/*Desenvolva um programa para gerenciar notas de alunos que serão gravadas e lidas no arquivo
2G.txt. Para cada aluno, grave o nome e a nota separados por vírgula.
Ao ser executado, o programa deve apresentar o menu:
(1) Cadastrar novo aluno
(2) Mostrar todos os alunos
(3) Sair
Escolha uma opção: _
O programa deverá processar a operação selecionada pelo usuário e retornar para o menu principal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cadastrarAluno(FILE *arquivo) {
    char nome[50];
    float nota;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    fprintf(arquivo, "%s,%.2f\n", nome, nota);
    printf("Aluno cadastrado com sucesso!\n");
}

void mostrarAlunos(FILE *arquivo) {
    char linha[100];

    rewind(arquivo); // Volta ao início do arquivo
    printf("Lista de alunos:\n");
    while (fgets(linha, sizeof(linha), arquivo)) {
        printf("%s", linha);
    }
}

int main() {
    FILE *arquivo = fopen("2G.txt", "a+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("(1) Cadastrar novo aluno\n");
        printf("(2) Mostrar todos os alunos\n");
        printf("(3) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarAluno(arquivo);
                break;
            case 2:
                mostrarAlunos(arquivo);
                break;
            case 3:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);

    fclose(arquivo);
    return 0;
}   