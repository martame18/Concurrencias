#include <stdio.h>

// Hecho por Marta Maleno Escudero

// Al introducir por teclado un entero, devuelve su cuadrado más cercano.

int cercano(int a){
    int aux, aux1 = 1, aux2;
    for (aux = 1; aux<a; aux++){
        aux2 = aux*aux;
        if(aux2 > a){
            if(abs(aux1-a) < abs (aux2-a)){
                return aux1;
            } else{
                return aux2;
            }
        }
        aux1=aux2;
    }
}

int main(){
    int a;
    printf("Introduce un entero: ");
    scanf("%d", &a);
    printf("%d", cercano(a));
}
