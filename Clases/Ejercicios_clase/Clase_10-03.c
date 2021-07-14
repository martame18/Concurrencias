/*
* Creado por Marta Maleno Escudero
*
* Ejemplos de la clase del 10-03-2021
*
* En la línea 41 vemos el primer ejemplo de una estructura
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cambiaA(char * cadena){
    for (int i=0; i<strlen(cadena); i++){
        if(cadena[i]=='A') *(cadena+i)='a';
    }
    return 0;
}

int intercambio(int *x, int *y){
    int aux = *x; //aux = 5
    *x = *y;      // x = 8
    *y = *aux;    // y = 5
    return 0;
}

void cambiaSigno(int *ptr){
    *ptr = -*ptr;
}

int ejemplo(int *ptr){
    int x = 5;

    *ptr = (int *)malloc(sizeof(int));
    return 0;
}


int ejemplo2(int *x){
    *x = 5;
}

//   Estructuras:
// es como un array en el que cada componente es de un tipo diferente

struct Persona{
    char nombre[30];
    unsigned edad;
};

int main1(){
    int a;
    //scanf("%d", &a);
    int *c;
    char cadena[10]="Adiós";
    cambiaA(cadena);

    char cadena[28] = "Empezamos una y otra vez";
    char *str = cadena;
    char a[28];
    strcpy(a,cadena);
    str = &cadena[0];
    printf("%c",str);
    int x = 8;

    cambiaSigno(&x);
}

int main2(){
    // int *ptr = (int *)malloc(8*sizeof(int));
    int *ptr;
    ptr[0] = 8;
    ejemplo(&ptr);

    int y;
    ejemplo2(&y);
    //y=5

    return 0;
}

int main(){
    struct Persona p;
    //las cadenas de caracteres solo se puede declarar al inicializar la variable
    strcpy(p.nombre, "Marta");  //NO SE PUEDE HACER: p.nombre = "Marta";
    p.edad = 25;
}
