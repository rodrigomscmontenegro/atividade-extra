# Atividade Extra: Fundamentos de Ponteiros em C

Este repositório contém as soluções para a sequência de atividades sobre o uso de ponteiros em C, organizadas individualmente de `atividade01.c` a `atividade05.c`.

## Estrutura dos Arquivos

* **`atividade01.c`**: Introdução aos ponteiros. Demonstra como declarar um ponteiro, capturar o endereço de uma variável `float` e alterar seu valor através de desreferenciação (`*`).
* **`atividade02.c`**: Passagem por referência. Encapsulamento da lógica de alteração de preço em uma função (`aplicar_desconto`) que recebe o endereço de memória como parâmetro.
* **`atividade03.c`**: Ponteiros para `struct`. Definição de uma `struct Produto` e manipulação de seus membros utilizando o operador seta (`->`).
* **`atividade04.c`**: Aritmética de ponteiros. Gerenciamento de um array estático de produtos. O acesso aos elementos e campos é feito exclusivamente via aritmética de ponteiros (`ptr + i`), sem o uso de índices (`[]`).
* **`atividade05.c`**: Alocação dinâmica. Implementação de um sistema flexível onde o usuário define o tamanho do estoque em tempo de execução, utilizando `malloc` para alocação e `free` para liberação da memória.

## Como Executar

Para compilar e testar qualquer um dos arquivos, utilize o GCC em seu terminal:

```bash
# Exemplo para compilar a atividade 05
gcc atividade05.c -o atividade05
./atividade05