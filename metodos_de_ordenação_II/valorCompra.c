/*
Uma empresa de e-commerce precisa organizar os pedidos feitos por clientescom base no valor total da compra (em reais). 
Cada pedido contém:
• Código do pedido
• Nome do cliente
• Quantidade de itens
• Valor total da compra
A equipe de relatórios deseja visualizar os pedidos ordenados do maior para o menor valor total,
a fim de priorizar a análise dos clientes mais lucrativos.
Especificações:
• Crie uma struct Pedido
• Crie um vetor com 12 pedidos
• Implemente Merge Sort ou Quick Sort para ordenar os pedidos em ordem
decrescente de valor_total
• Após a ordenação, exiba os dados dos 5 maiores pedidos.
*/


#include <stdio.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[100];
    int qntd;
    int valor;
} Pedido;

int particionar(int v[], int inicio, int fim, int indice_pivo) {
    int pivo = v[indice_pivo]; 
    int esquerda = inicio;
    int direita = fim - 1;
    while (esquerda <= direita) {
        while (esquerda <= direita && v[esquerda] <= pivo){
            ++esquerda;
        }
        while (esquerda <= direita && v[direita] >= pivo) {
            --direita;
        }
        if (esquerda < direita) {
            int temp = v[esquerda];
            v[esquerda] = v[direita];
            v[direita] = temp;
        }
    }
    int nova_pos_pivo = esquerda;
    int temp = v[nova_pos_pivo];
    v[nova_pos_pivo] = v[indice_pivo];
    v[indice_pivo] = temp;
    return nova_pos_pivo;
}

void quickSort(int v[], int inicio, int fim) {
    if (inicio >= fim)
        return;
    int indice_pivo = fim;
    indice_pivo = particionar(v, inicio, fim, indice_pivo);
    quickSort(v, inicio, indice_pivo - 1);
    quickSort(v, indice_pivo + 1, fim);
}



int main() {
    Pedido pedidos[12] = {
    {1001, "Maria Silva", 3, 450.75},
    {1002, "João Pereira", 1, 120.00},
    {1003, "Fernanda Costa", 5, 799.90},
    {1004, "Carlos Eduardo", 2, 310.50},
    {1005, "Beatriz Almeida", 4, 625.20},
    {1006, "Rafael Tavares", 6, 950.00},
    {1007, "Patrícia Gomes", 2, 299.99},
    {1008, "Luciana Ribeiro", 1, 150.00},
    {1009, "Bruno Fernandes", 3, 480.00},
    {1010, "Camila Andrade", 4, 699.90},
    {1011, "Thiago Souza", 7, 1120.00},
    {1012, "Juliana Rocha", 2, 350.30}
    };
    int v[12];
    for (int i = 0; i < 12; i++) {
        v[i] = pedidos[i].valor;
    }
    quickSort(v, 0, 11);
    printf("Top 5 maiores pedidos:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 12; j++) {
            if (pedidos[j].valor == v[11 - i]) {
                printf("Codigo: %d, Nome: %s, Quantidade: %d, Valor: %d\n", pedidos[j].codigo, pedidos[j].nome, pedidos[j].qntd, pedidos[j].valor);
                break;
            }
        }
    }
}