#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor para a: ");
    scanf("%d", &a);

    printf("Digite o valor para b: ");
    scanf("%d", &b);

    int *endereco_a = &a;
    int *endereco_b = &b;

    if (endereco_a > endereco_b) {
        printf("O maior endereço é de 'a'. Conteúdo: %d\n", *endereco_a);
    } else if (endereco_b > endereco_a) {
        printf("O maior endereço é de 'b'. Conteúdo: %d\n", *endereco_b);
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
