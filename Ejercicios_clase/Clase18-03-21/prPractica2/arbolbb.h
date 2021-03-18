/*
 * arbolbb.h
 *
 *  Created on: 4/4/2016
 *      Author: esc
 */

#ifndef ARBOLBB_H_
#define ARBOLBB_H_
#include <stdio.h>

typedef struct T_Nodo* T_Arbol;

	struct T_Nodo {
			unsigned dato;
			T_Arbol izq, der;
		};

// Crea la estructura utilizada para gestionar la memoria disponible.
	void Crear(T_Arbol* arbol){
		*arbol = NULL;
	}

// Destruye la estructura utilizada.
	void Destruir(T_Arbol* arbol){
		if (*arbol != NULL){
			Destruir(&(*arbol)->izq);
			Destruir(&(*arbol)->der);
			free(*arbol);
			*arbol = NULL;
		}
	}

	// Inserta num en el arbol
	void Insertar(T_Arbol* arbol,unsigned num){
		T_Arbol aux = (T_Arbol)malloc(sizeof(struct T_Nodo));
		T_Arbol act = *arbol, ant = NULL;
		unsigned repetido = 0;
		aux->dato = num;
		aux->izq = NULL;
		aux->der = NULL;
		while (act!=NULL && !repetido){ //buscar el lugar de inserción
			ant = act;
			if (act->dato > num){
				act = act->izq;
			} else if (act->dato < num){
				act = act->der;
			} else{
				repetido = 1;
			}
		}
		if(!repetido){
			if(ant == NULL){
				*arbol = aux;
			} else if (ant->dato > num){
				ant->izq = aux;
			} else{
				ant->der = aux;
			}
		}
	}

	// Muestra el contenido del árbol en InOrden
	void Mostrar(T_Arbol arbol){
		if(arbol != NULL){
			Mostrar(arbol->izq);
			printf("%u\n", arbol->dato);
			Mostrar(arbol->der);
		}
	}

	// Guarda en disco el contenido del arbol
	void Salvar(T_Arbol arbol, FILE* fichero);

#endif /* ARBOLBB_H_ */
