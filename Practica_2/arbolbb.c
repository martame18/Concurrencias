/*
 * arbolbb.c
 *
 *  Created on: 2021 Apr 2
 *      Author: Marta Maleno Escudero
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
		// ordenado padres menores que hijos
		T_Arbol a = &arbol;
		unsigned int repe = 0;

		if(a == NULL && !repe){   // si el arbol está vacio
			a->dato = num;
		} else if (!repe){
			if(a->dato > num){
				a = a->izq;
				Insertar(*a,num);
			} else if (a->dato < num){
				a = a->der;
				Insertar(*a,num);
			} else{
				repe = 1;
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
	void Salvar(T_Arbol arbol, FILE* fichero){
		fopen(fichero, "w");
		if(arbol!=NULL){
			Salvar(arbol->izq);
			fwrite( &arbol->dato, sizeof(unsigned), 1, fichero);
			Salvar(arbol->der);
		}
		fclose(fichero);
	}

	void MostrarIndice(T_Arbol a){
		T_Arbol aux = a, aux2;
		unsigned int indice = 0;
		if(a != NULL){
			if(aux->izq != NULL){

				aux2 = aux;
				aux = aux->izq;


				/*
				MostrarIndice(aux->izq);
				aux->izq = NULL;
				MostrarIndice(aux->der);
				*/
			} else{
				printf("%u:%u", &indice, &aux->dato);
				indice++;
			}
		}
	}

	unsigned int indice = 0;

	void MostrarIndice(T_Arbol a){
		T_Arbol aux = a, ant = a;
		if (aux->izq == NULL){
			if(aux->der == NULL){
				printf("%u:%u", &indice, &aux->dato);
				indice++;
			} else{
				printf("%u:%u", &indice, &aux->dato);
				MostrarIndice(aux->der);
				indice++;
			}
		} else{
			MostrarIndice(aux->izq);
			printf("%u:%u", &indice, &aux->dato);
			indice++;
			MostrarIndice(aux->der);
		}
	}


	void Copiar(T_Arbol a, T_Arbol *ac){
		Insertar(*ac, a->dato);
		if(a->izq == NULL && a->der != NULL){
			Copiar(a->der, *ac);
		} else if (a->izq != NULL && a->der == NULL){
			Copiar(a->izq, *ac);
		}
	}
