#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"miLista.h"

//Funcion que permite listar el siguiente elemento de la lista
ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
 if (lista->numeroElementos==0){ //Si no existe elementos este retorna nulo
        return NULL;
    }
    else{
           if(elemento->siguiente!=&(lista->ancla)){ //retorna el siguiente elemento si este es diferente a ancla
		return elemento->siguiente;
	}else{
		return NULL;
        }
   }
}
