#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"miLista.h"

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
if(lista->numeroElementos==0){
        return NULL;
    }
    else{
        ElementoLista *elemento=(ElementoLista *)malloc(sizeof(ElementoLista));
        elemento =Lista_Primero(lista);
        int i=0;
        int numeroElementos=Lista_Conteo(lista);
        for (i ; i<numeroElementos ; i++) {
                        if(elemento->objeto == objeto){
                            return elemento;
                        } 
                          elemento=Lista_Siguiente(lista,elemento);            
                    	}

                        return NULL;
	}

    }

