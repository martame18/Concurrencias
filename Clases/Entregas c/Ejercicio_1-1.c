#include <stdio.h>

// Hecho por Marta Maleno Escudero

// Al introducir por teclado un entero, devuelve esa cantidad de primos empezando por el 1.

int esPrimo(int n){
    int bo = 1, i;
    for (i=2; i<=(n/2); i++){
        if (n%i == 0){
            bo = 0;
        }
    }
    return bo;
}

int main(){
    int n, sum = 1, k = 2;
    printf("Escribe un numero: ");
    scanf("%d", &n);
    if (n>=1){
        printf("%d ", 1);
    }
    while (sum < n){
        if (esPrimo(k)==1){
            printf("%d ", k);
            sum ++;
            k++;
        } else{
            k++;
        }
    }

    return 0;
}
