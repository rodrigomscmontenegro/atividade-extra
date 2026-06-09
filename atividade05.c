#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float percentual) {
    produto->preco *= (1.0f - percentual / 100.0f);
}

void imprimir_produtos(Produto *ptr, int quantidade) {
    printf("\n%-5s %-20s\n", "ID", "Preco");
    printf("---------------------------\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%-5d R$ %-18.2f\n", (ptr + i)->id, (ptr + i)->preco);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &n);

    // Alocação dinâmica do array de Produto
    Produto *estoque = (Produto *)malloc(n * sizeof(Produto));

    if (estoque == NULL) {
        printf("Erro: falha ao alocar memoria.\n");
        return 1;
    }

    // Preenchimento iterando com ponteiros
    for (int i = 0; i < n; i++) {
        (estoque + i)->id = i + 1;
        printf("Digite o preco do produto %d: R$ ", i + 1);
        scanf("%f", &(estoque + i)->preco);
    }

    printf("\n=== Produtos cadastrados ===");
    imprimir_produtos(estoque, n);

    // Libera a memória alocada
    free(estoque);
    estoque = NULL;

    printf("Memoria liberada com sucesso.\n");

    return 0;
}