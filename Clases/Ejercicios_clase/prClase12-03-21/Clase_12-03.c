/*
* Creado por Marta Maleno Escudero
*
* Primera clase con Listas
*/

#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>

void crearLista(Lista *l){ //crear una lista vacía
    *l = NULL;
}

void recorrerLista(Lista l){ //escribe en pantalla los elementos de la lista
    while(l!=NULL){
        printf("%d", l->elem);
        l= l->sig;
    }
    printf("\n");
}

int listaVacia(Lista l){ //devuelve 0 si la lista está vacía
    return l == NULL;
}

void insertarLista(Lista *l, int elem){ // inserta el elemento elem en la lista l
    Lista ant = NULL;
    Lista act = *l;
    Lista aux;
    while (act!=NULL && act->elem<elem){ //(*act).elem = act -> elem
        ant = act;
        act = act->sig;
    }
    //he encontrado lugar de insercion

    aux = (Lista)mallon(sizeof(struct NodoLista));
    aux -> elem = elem;
    aux -> sig = NULL;

    if(ant == NULL){ //insertar delante del primero
        aux -> sig = *l;
        *l = aux;
    } else{
        aux -> sig = act;

    }

}

int extraerLista(Lista *l, int elem){ //elimina de la lista el elemento elem. Devuelve 1 si
    Lista ant = NULL;
    Lista act = *l;

    while (act!=NULL && act->elem<elem){
        ant = act;
        act = act->sig;
    }
    if (act ==NULL) return 0;
    else if(act->elem!=elem) return 0;
    else{
        if (ant == NULL){
            *l = act->sig;
            free(act);
        } else{
            ant->sig = act->sig--m
        }
        free(act);
        return 1;
    }
}

int borrarLista(Lista *l){ //elimina todos los nodos de la lista y la deja vacía
    Lista aux;
    while(*l != NULL){
        aux = *l;
        *l = aux->sig;
    }
    return 0;
}
