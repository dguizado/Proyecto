#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include"miLista.h"

//Funcion que lista el ultimo elemento de la lista
ElementoLista *Lista_Ultimo(ListaEnlazada *lista){
 if(lista->numeroElementos==0){ //Si no existe elementos en la lista, este retorna nulo
        return NULL;
    }

    else{

        ElementoLista *d_ancla = &(lista->ancla); //se alamacena ancla
        ElementoLista *anterior = d_ancla->anterior; //a ElementoLista anterior se le asigna el valor anterior de ancla, el cual es el ultimo de la lista
        return anterior;
    }
}
