#include <stdio.h>

int main() {
    float preco = 100.0f;
    float *ptr = &preco;

    *ptr *= 1.10f;

    printf("Preco apos aumento de 10%%: R$ %.2f\n", preco);

    return 0;
}