#include <stdio.h>

// Hecho por Marta Maleno Escudero

// Al introducir un entero por teclado, devuelve la suma de sus dígitos.

int sumDigitos(int a){
    int suma = 0;
    while (a >= 10){
        suma = suma + (a%10);
        a = a/10;
    }
    suma = suma + (a%10);
    return suma;
}

int main(){
    int a;
    printf("Introduce un entero: ");
    scanf("%d", &a);
    printf("%d", sumDigitos(a));
}
