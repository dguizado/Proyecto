#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"miLista.h"
#include "funcionSacar.c"

void Lista_SacarTodos(ListaEnlazada *lista){
    ElementoLista *sacar;
    for(sacar = lista->ancla.siguiente; sacar= lista->ancla.anterior; sacar++){
    Lista_Sacar(lista,sacar);
    }
}

