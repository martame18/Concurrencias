/*
* Hecho por Marta Maleno Escudero
*
* Ejercicios para hacer en casa del 06-03-2021
*/

// Ejercicio 1

/*
* Dado: 
* < int t[30]; int *p; >
* 
* Podríamos hacer < p = t;> porque estableceríamos que el puntero apuntase al primer valor del array t.
* Pero no sería correcto hacer < t = p;> porque p no es un entero, como los valores que han de almacenarse
* en t, es un puntero a un entero y produciría un error.
*/


// Ejercicio 2

/* No tiene sentido que una instrucción de tipo &var aparezca a la izquierda de una asignación porque es un
operador que almacena la dirección de una variable ya existente y esto no se puede alterar. */


// Ejercicio 3

/* Si ptr es un puntero a un entero &ptr es un entero que almacena el lugar al que apunta el puntero. */


// Ejercicio 4

/* El código imprime: P */


// Ejercicio 5

/* El código imprime: 1.0 */


// Ejercicio 6

char *str = "Empezamos una y otra vez";
char *ptr;
char a[28];
ptr = str;
a = "Empezamos una y otra vez";
str = &a;


// Ejercicio 7

void cambiaSigno (int *ptr){
    ptr = -ptr;
}


// Ejercicio 8

int check(char *ptr, char *c){
    if(ptr == &c){
        return 1;
    } else{
        return 0;
    }
}


// Ejercicio 9

void elimina(char c, char *cadena){
    while (cadena!= 0){
        if (*cadena == 0){
            *cadena += 1;
        }
    }
}