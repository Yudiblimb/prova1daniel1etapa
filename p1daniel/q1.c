#include <stdio.h>

int main(){
    //esteganografia
    unsigned int r, g, b, m;
    puts("Digite os valores de r, g e b: ");
    scanf("%u %u %u", &r, &g, &b);

    puts("Digite o valor de m de 0 atea 7: ");
    scanf("%u", &m);

    //nao pode ser maior q 255 por que um byte tem no 2 elevado a 8 que e256
    if (r > 255 || g > 255 || b > 255 || m > 7) {
        printf("Valores invalidos.\n");
        return 1;
    }
    
    r = (r & ~1u) |((m >> 2) & 1u);
    g = (g & ~1u) | ((m >> 1) & 1u);
    b = (b & ~1u) | (m & 1u);

    printf("Nova cor: r=%u, g=%u, b=%u\n", r, g, b);

    return 0;
}