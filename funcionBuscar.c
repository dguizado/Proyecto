#include<stdio.h>
#include<>
#include"miLista.h"

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
   ElementoLista *nuevo, *elemento;
   nuevo = (ElementoLista*) malloc(sizeof(ElementoLista));
   elemento = (ElementoLista*) malloc(sizeof(ElementoLista));
   nuevo->objeto = objeto;
   for(nuevo=lista->ancla.siguiente; nuevo=lista->ancla.anterior; nuevo++){
      if(nuevo->objeto == elemento->objeto){
        return nuevo;
      }
   }
}

