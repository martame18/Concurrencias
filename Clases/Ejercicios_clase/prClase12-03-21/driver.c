#include "Lista.h"

int main(){
    Lista l;

    crearLista(&l);

    insertarLista(&l,2);
    insertarLista(&l,1);
    insertarLista(&l,7);
    insertarLista(&l,5);
    recorrerLista(l);
    borrarLista(&l);
    printf("recorro la lista vacía\n");
    recorrerLista(l);
}
