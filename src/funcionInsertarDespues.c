#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"miLista.h"

int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
if (lista->numeroElementos==0){
        return 0;
    }
    else{
        ElementoLista *nuevoElemento = (ElementoLista *)malloc(sizeof(ElementoLista));
            ElementoLista *temp = elemento->siguiente;
            nuevoElemento->anterior=elemento;	
            nuevoElemento->objeto=objeto;
            nuevoElemento->siguiente=elemento->siguiente;	
            elemento->siguiente=nuevoElemento;
            temp->anterior=nuevoElemento;
            lista->numeroElementos++;
            return 1;
    }
}
