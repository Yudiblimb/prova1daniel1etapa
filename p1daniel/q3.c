#include <stdio.h>

int main(){
    puts("digite quantos pixels serao digitados");
    int n,menor,maior;
    float y;
    int x;
    scanf("%d", &n);

    for(int i = 0;i<n;i++){
        puts("digite o valor do atual x entre 0 e 255");
        scanf("%d", &x);
        if(i==0){
            menor = x;
            maior = x;
        }else{
            if(x<menor){
                menor = x;         
            }
            if(x>maior){
                maior = x;
            }
        }
    }

    puts("calcule o valor normalizado");
    for(int i = 0;i<n;i++){
        puts("digite novamente o valor de x");
        scanf("%d", &x);

        if (maior == menor) {
            // isso daqui o senhor disse que daria divisao por zero
            y = 0;
        } else {
            y = (float )(x-menor)/(maior-menor);
        }
        printf("y%d = %.2f\n", i + 1, y);
    }
}