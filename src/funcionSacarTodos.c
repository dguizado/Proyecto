#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"miLista.h"


void Lista_SacarTodos(ListaEnlazada *lista){
    ElementoLista *d_ancla = &(lista->ancla);
    lista->numeroElementos=0;
    d_ancla->siguiente = NULL;
    d_ancla->anterior = NULL;    
}

