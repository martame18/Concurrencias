/*
 * arbolbb.c
 *
 *  Created on: 2021 Apr 2
 *      Author: marta
 */


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
			&(*arbol)->dato = NULL;
			Destruir( &(*arbol)->izq );
			Destruir( &(*arbol)->izq );
			free(*arbol);
			*arbol = NULL;
		}
	}

	// Inserta num en el arbol
	void Insertar(T_Arbol* arbol,unsigned num){
		;
	}

	int Buscar(T_Arbol* arbol, unsigned num){
		// si lo encuentra devuelve 1, si no lo encuentra 0
		if(&(*arbol)->dato == num){
			return 1;
		}else{
			Buscar((&(*arbol)->izq), num);
			Buscar((&(*arbol)->der), num);
		}
		return 0;
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




