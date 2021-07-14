/*
 * Lista.h
 *
 *  Created on: 2021 Mar 12
 *      Author: marta
 */

#ifndef LISTA_H_
#define LISTA_H_

typedef struct NodoLista* Lista;

struct NodoLista{

	int elem;

	Lista sig;

};

void crearLista(Lista *l); //crea una lista vacía

void recorrerLista(Lista l); //escribe en la pantalla los elementos de la lista

int listaVacia(Lista l); //devuelve 0 sii la lista está vacía

void insertarLista(Lista *l,int elem); // inserta el elemento elem en la lista l de forma que quede ordenada de forma creciente

int extraerLista(Lista *l,int elem); // elimina de la lista el elemento elem. Devuelve 1 si se ha podido eliminar y 0, si elem no estaba en la lista.

int borrarLista(Lista *l); //elimina todos los nodos de la lista y la deja vacía


#endif /* LISTA_H_ */
