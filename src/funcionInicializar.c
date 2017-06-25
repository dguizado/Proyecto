#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include "miLista.h"

int Lista_Inicializar(ListaEnlazada *lista){
  lista->numeroElementos=0;

  lista = (ListaEnlazada*)malloc(sizeof(ListaEnlazada));
  ElementoLista *ancla = (ElementoLista*)malloc(sizeof(ElementoLista));
  ancla->objeto=NULL;
   if(!lista){
      return 0;
   }
   if(!ancla){
      return 0;
   }
   ancla->anterior=NULL;
   ancla->siguiente=NULL;
   lista->ancla= *ancla;
    
   return 1;

} 
