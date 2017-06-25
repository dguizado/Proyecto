#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include"miLista.h"

ElementoLista *Lista_Ultimo(ListaEnlazada *lista){
   ElementoLista *ultimo;
   ultimo = (ElementoLista*)malloc(sizeof(ElementoLista));
   ultimo = lista->ancla.anterior;
   return ultimo;
}
