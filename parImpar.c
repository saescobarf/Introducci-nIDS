#include <stdio.h>

int main() {
    int n = 10;//Deje la variable configurable para poder cambiarla en cualquier momento

    for (int i = 0; i < n; i++) {
        int numero;
        printf("Ingrese un número a validar: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("El dato capturado %d es un número par\n", numero);
        } else {
            printf("El dato capturado %d es un número impar\n", numero);
        }
    }

    return 0;
}