#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "miLista.h"

//Funcion que permite insertar un objeto al incio de la lista
int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto){
ElementoLista * nuevoElemento=(ElementoLista *)malloc(sizeof(ElementoLista)); //Se crea nuevo ElementoLista y se le asigna un espacio de memoria

    if(!nuevoElemento){
        return 0;
    }   

    nuevoElemento->objeto = objeto;//Se alamacena objeto dentro del nuevo elemento
    ElementoLista *d_ancla = &(lista->ancla);
    if (lista->numeroElementos==0){

        d_ancla->siguiente=nuevoElemento;
        d_ancla->anterior=nuevoElemento;
        nuevoElemento->siguiente=d_ancla;
        nuevoElemento->anterior=d_ancla;
        lista->numeroElementos++;

        return 1;
    }

    else{

        ElementoLista *primero = d_ancla->siguiente;
        primero->anterior = nuevoElemento;
        nuevoElemento->siguiente = primero;
        nuevoElemento->anterior = d_ancla;
        d_ancla->siguiente = nuevoElemento;
        lista->numeroElementos++;

        return 1;

    }

    return 0;

}
