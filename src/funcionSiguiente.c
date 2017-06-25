#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"miLista.h"

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
 if (lista->numeroElementos==0){
        return NULL;
    }
    else{
           if(elemento->siguiente!=&(lista->ancla)){
		return elemento->siguiente;
	}else{
		return NULL;
        }
   }
}
