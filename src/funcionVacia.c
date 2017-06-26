#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"miLista.h"
int Lista_Vacia(ListaEnlazada *lista){
    if(lista->numeroElementos==0){
        return 1;
    }
    else{
        return 0;
    }
}
