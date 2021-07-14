/*
 ============================================================================
 Name        : Practica2B.c
 Author      : Marta Maleno Escudero
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arbolbb.h"
#include "arbolbb.c"

/**
 * Pide un número "tam" al usuario, y
 * crea un fichero binario para escritura con el nombre "nfichero"
 * en que escribe "tam" numeros (unsigned int) aleatorios
 * Se utiliza srand(time(NULL)) para establecer la semilla (de la libreria time.h)
 * y rand()%100 para crear un número aleatorio entre 0 y 99.
 */
void creafichero(char* nfichero){

	// ***FICHERO BINARIO***
	// escribir => fwrite(a,b,c,d)
	//    a : zona de la memoria principal de donde se va a copiar
	//    b : tamaño de los bloques que vamos a copiar (bytes) -> sizeof(a)
	//    c : cantidad de bloques a copiar
	//    d : nombre del fichero

	unsigned int tam;
	FILE *ptr = fopen(nfichero, "wb");
	if (ptr == NULL) perror("no se ha podido abrir el fichero");
	else{
		printf("Cuantos numeros quieres crear?\n");
		fflush(stdout);
		scanf("%u", tam);   // tam = cantidad de números aleatorios a generar
		fflush(stdin);

		srand(time(NULL));
		int i, al;             // i = auxiliar para el for
		for (i = 0; i<tam; i++){
			al = rand()%100;   // al = variable para los aleatorios
			fwrite(&al, sizeof(int), 1, ptr);
		}

		fclose(ptr);
	}
}
/**
 * Muestra por pantalla la lista de números (unsigned int) almacenada
 * en el fichero binario "nfichero"
 */
void muestrafichero(char* nfichero){
	FILE *ptr = fopen(nfichero, "rb");
	if (ptr == NULL) perror("no se ha podido abrir el fichero");
	else{
		while (fread (&nfichero, sizeof(unsigned int), 1, ptr) ==1);
	}
	fclose(ptr);
}

/**
 * Guarda en el arbol "*miarbol" los números almacenados en el fichero binario "nfichero"
 */

void cargaFichero(char* nfichero, T_Arbol* miarbol)
{

}

int main(void) {
	char nfichero[50];
	printf ("Introduce el nombre del fichero binario:\n");
	fflush(stdout);
	scanf ("%s",nfichero);
	fflush(stdin);
	creafichero(nfichero);
	printf("\n Ahora lo leemos y mostramos\n");
	muestrafichero(nfichero);
	fflush(stdout);

	printf ("\n Ahora lo cargamos en el arbol\n");
	T_Arbol miarbol;
	Crear (&miarbol);
	cargaFichero(nfichero,&miarbol);
	printf ("\n Y lo mostramos ordenado\n");
	Mostrar(miarbol);
	fflush(stdout);
	printf("\n Ahora lo guardamos ordenado\n");
	FILE * fich;
	fich = fopen (nfichero, "wb");
	Salvar (miarbol, fich);
	fclose (fich);
	printf("\n Y lo mostramos ordenado\n");
	muestrafichero(nfichero);
	Destruir (&miarbol);

	return EXIT_SUCCESS;
}
