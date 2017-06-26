#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"miLista.h"

//La funcion me permite buscar un objeto dentro de la lista

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
if(lista->numeroElementos==0){  //si en la lista no hay elementos entonces devuelve null
        return NULL;
    }
    else{
//Se crea un nuevo ElementoLista y se le asigna espacio de memoria
        ElementoLista *elemento=(ElementoLista *)malloc(sizeof(ElementoLista));
        elemento =Lista_Primero(lista);
        
        int numeroElementos=Lista_Conteo(lista);
        for (int i=0 ; i<numeroElementos ; i++) { //se recorre los elementos de la lista
                        if(elemento->objeto == objeto){ //Se valida si el objeto almacenado en ese elemento de la lista coincide con el objeto a buscar
                            return elemento; //si coincide, retorna el elemento
                        }  
                          // si no coincide sigue con el siguiente elemento
                          elemento=Lista_Siguiente(lista,elemento);
                    	}

                        return NULL;
	}

    }

