/*
* Creado por Marta Maleno Escudero
*
* Ejemplos de la clase del 10-03-2021
*/

#include <stdio.h>
struct Persona{
    char nombre[30];
    int edad;
}

void inicializa(struct Persona *p){
    //p es un puntero
    //*p es un struct Persona
    printf("Introduce un nombre:\n"); fflush(stdout);
    scanf("%s",p->nombre); //(*p).nombre
    printf("Introduce la edad:\n"); fflus(stdout);
    scanf("%u", &(p->edad));
}

void escribe(struct Persona){
    printf("Nombre: %s, Edad: %u\n", p.nombre, p.edad);
}

void inicializaLista(struct Persona *lista, int m, int* n){
    int i=0;
    int fin =0;
    while (i<n && !fin){
        inicializa(&lista[i]);
        if(lista[i].edad == 0){
            fin = 1
        } else{
            i++;
        }
    }
}

void escribeLista(struct Persona *lista, int n){
    for (int i=0; i<n; i++){
        escribe(lista[i]);
    }
}
