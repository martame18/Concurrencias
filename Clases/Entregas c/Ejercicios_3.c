/*
* Hecho por Marta Maleno Escudero
*
* Ejercicios para hacer en casa del 10-03-2021
*/
//--------------------------------------------------------------------------------------------------------

#include <stdio.h>

struct Persona{
    char nombre[30];
    unsigned int edad;
}

void inicializa(struct Persona *p){
    printf("Introduce un nombre:\n");
    scanf("%c", p.nombre);
    printf("\nIntroduce una edad:\n");
    scanf("d", p.edad);
}

void escribe(struct Persona p){
    printf("Nombre: %c, Edad: %c\n", p.nombre, p.edad);
}

void inicializaLista(struct Persona *lista, int m, int* n){
    printf("Introduce menos de %d personas:\n", n);
    while (m>=n && lista[n-1].edad!=0){
        inicializa(lista[n]);
        n++;
    }
}

void escribeLista(struct Persona *lista, int m){
    for (int i=0; i<m; i++){
        escribe(lista[i]);
    }
}

int main(){
    Persona[10] lista, *lista;
    int cant=0, *cant;
    inicializaLista(*lista, 10, *cant);
    escribeLista(*lista, 10);
}
