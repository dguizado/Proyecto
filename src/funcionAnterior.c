#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"miLista.h"
ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
    if(lista->numeroElementos==0){
        return NULL;
    }
    else {
             if(elemento->anterior!=&(lista->ancla)){
	return elemento->anterior;
	}
             else{
	return NULL;
}
    
    }

}
