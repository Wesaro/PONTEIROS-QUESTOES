#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    int *endereco_a = &a;
    int *endereco_b = &b;

    if (endereco_a > endereco_b) {
        printf("O maior endereço é: %p (endereço de 'a')\n", (void *)endereco_a);
    } else if (endereco_b > endereco_a) {
        printf("O maior endereço é: %p (endereço de 'b')\n", (void *)endereco_b);
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
