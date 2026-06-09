#include <stdio.h>

void aplicar_desconto(float *preco, float percentual) {
    *preco *= (1.0f - percentual / 100.0f);
}

int main() {
    float preco = 100.0f;

    printf("Preco original: R$ %.2f\n", preco);

    aplicar_desconto(&preco, 15.0f);

    printf("Preco apos desconto de 15%%: R$ %.2f\n", preco);

    return 0;
}