#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float percentual) {
    produto->preco *= (1.0f - percentual / 100.0f);
}

int main() {
    Produto p = {1, 100.0f};

    printf("Produto ID: %d | Preco original: R$ %.2f\n", p.id, p.preco);

    aplicar_desconto(&p, 20.0f);

    printf("Produto ID: %d | Preco apos desconto de 20%%: R$ %.2f\n", p.id, p.preco);

    return 0;
}