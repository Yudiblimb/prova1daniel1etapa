#include <stdio.h>

int main(){

    int numero,soma = 0, contador = 0;

    while (1) {
        scanf("%d", &numero);
        if(numero == -1){
            printf("soma = %d \n",soma);
            printf("Quantidade = %d \n",contador);
            break;
        }
        if(numero<0){
            soma -= numero;
            contador--;
    
        }
        if(numero > 255){
        soma -= numero;
        contador--;
        
        }
        soma += numero;
        contador++;
    }
    printf("soma = %d \n",soma);
    printf("Quantidade = %d \n",contador);
    return 0;
}