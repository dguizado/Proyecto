#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"miLista.h"

//Funcion que permite sacar todos los elementos de la lista
void Lista_SacarTodos(ListaEnlazada *lista){
    ElementoLista *d_ancla = &(lista->ancla);
    lista->numeroElementos=0; //Numero de elemnentos es =0
    d_ancla->siguiente = NULL; //Elemento despues de ancla es nulo
    d_ancla->anterior = NULL;  //Elemento anteriro de ancla es nulo
}

