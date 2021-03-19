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
    // ESTO HAY QUE COMPROBARLO PORQUE ESTA REGULERO ------------------------------------------------------

    Persona pers;
    printf("Introduce un nombre:\n");
    scanf("%c", pers.nombre);
    printf("\nIntroduce una edad:\n");
    scanf("d", pers.edad);
}