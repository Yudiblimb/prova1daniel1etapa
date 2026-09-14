#include <stdio.h>

int main(void) {
    int n;
    int anterior, atual, proxima;
    //mal deu tempo de testar, espero que esteja certa
    puts("Filtro de media movel centrada");
    printf("Digite o valor de n: ");

    if (scanf("%d", &n) != 1 || n < 3) {
        puts("n deve ser pelo menos 3.");
        return 1;
    }

    printf("Digite x1: ");
    if (scanf("%d", &anterior) != 1) {
        puts("Amostra invalida.");
        return 1;
    }

    printf("Digite x2: ");
    if (scanf("%d", &atual) != 1) {
        puts("Amostra invalida.");
        return 1;
    }

    for (int i = 3; i <= n; i++) {
        printf("Digite x%d: ", i);
        if (scanf("%d", &proxima) != 1) {
            puts("amostra invalida.");
            return 1;
        }

        printf("y%d = %.2f\n", i - 1,(anterior + atual + proxima) / 3.0);
        anterior = atual;
        atual = proxima;
    }

    return 0;
}