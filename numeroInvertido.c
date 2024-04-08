#include <stdio.h>

int main() {
    int numero, numInvertido = 0;

    printf("Ingresa un número de 4 dígitos: ");
    scanf("%d", &numero);
    
    if(numero < 1000) {
        printf("Capturaste un numero de menos de 4 digitos o negativo\n");
        return 0;
    } else if (numero > 9999) {
        printf("Capturaste un numero de mayor a 4 digitos\n");
        return 0;
    } else {
    
        while (numero != 0) {
            int residuo = numero % 10;
            numInvertido = numInvertido * 10 + residuo;
            numero = numero / 10;
        
        }
        //este if me ayuda con numeros que tienen un cero en la segunda, tercera o cuarta posición
        if (numInvertido >= 1 && numInvertido <= 9) {
            printf("El numero invertido es: 000%d\n", numInvertido);
        } else if (numInvertido >= 11 && numInvertido <= 99) {
            printf("El numero invertido es: 00%d\n", numInvertido);
        } else if (numInvertido >= 111 && numInvertido <= 999) {
            printf("El numero invertido es: 0%d\n", numInvertido);
        } else {
            printf("El numero invertido es: %d\n", numInvertido);
        }
        
    }
    
    return 0;
}