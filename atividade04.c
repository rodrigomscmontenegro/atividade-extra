#include <stdio.h>

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
    Produto estoque[3] = {
        {1, 49.90f},
        {2, 129.99f},
        {3, 299.00f}
    };

    printf("=== Estoque inicial ===");
    imprimir_produtos(estoque, 3);

    aplicar_desconto(&estoque[1], 10.0f);

    printf("=== Apos 10%% de desconto no produto 2 ===");
    imprimir_produtos(estoque, 3);

    return 0;
}