#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"miLista.h"

//Funcion que permite insertar un objeto despues de un elemento dado
int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
if (lista->numeroElementos==0){
        return 0;
    }
    else{
//Crea en ElementoLista nuevo y se le asigna un espacio de memoria
        ElementoLista *nuevoElemento = (ElementoLista *)malloc(sizeof(ElementoLista));
            ElementoLista *temp = elemento->siguiente; //Se crea un ElementoLista temporal el cual almacena al elemento siguiente del elemento pasado
            nuevoElemento->anterior=elemento;	
//Almacena el objeto en el nuevoElemento creado
            nuevoElemento->objeto=objeto;
            nuevoElemento->siguiente=elemento->siguiente;	
            elemento->siguiente=nuevoElemento;
            temp->anterior=nuevoElemento;
            lista->numeroElementos++; //Se incrementa el numero de elementos almacenados en la lista
            return 1;
    }
}
