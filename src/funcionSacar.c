#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"miLista.h"
void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento){
    if(lista->numeroElementos==0){
            return;
    }
    
    if(lista->numeroElementos==1){
            ElementoLista *d_ancla= (elemento->anterior);
            lista->numeroElementos = 0;	
            d_ancla->siguiente=NULL;
            d_ancla->anterior=NULL;
            free(elemento);
	
            return;
}
    
    else{
            ElementoLista *tempSiguiente = elemento->siguiente;
            ElementoLista *tempAnterior = elemento->anterior;
            tempAnterior->siguiente=tempSiguiente;
            tempSiguiente->anterior=tempAnterior;
            lista->numeroElementos--;
            free(elemento);
    }



}
