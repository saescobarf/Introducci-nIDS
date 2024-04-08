#include <stdio.h>
#include <math.h> //agregué esta biblioteca para poder sacar la raiz del número

// Esta función nos genera la logica para identificar si el número que capturamos es primo 
int Primo(int num) {
    if (num <= 1) {
        printf("el dato capturado es menor o igual a 1 por ende\n\n");
        return 0; // No es primo si es menor o igual a 1
    }
    
    for (int i = (int) sqrt(num); i >= 2; i--) {
        /*printf("%d\n", i);*/ //esta linea lo use para imprimir i, y probar el cliclo for
        if (num % i == 0) {
            printf("el dato capturado es divisible en almenos uno de los números que se encuentran entre el 2 y %d \n\n", i);
            return 0; 
            // No es primo si su residuo es cero al dividirlo por algún número menor que su raiz cuadrada y mayor igual a 2
        }
    }
    return 1; // si no se cumplen las condiciones creadas anteriormente el número es primo
}

int main() {
    int numero;

    // aqui ingresa el número el usuario y se guarda en la variable numero
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Aqui mandamos a llamar la función Primo para validar si es primo o no.
    if (Primo(numero)) {
        printf("El número %d si es primo.\n", numero);
    } else {
        printf("El número %d no es primo.\n", numero);
    }

    return 0;
}