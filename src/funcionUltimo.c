#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include"miLista.h"

ElementoLista *Lista_Ultimo(ListaEnlazada *lista){
 if(lista->numeroElementos==0){
        return NULL;
    }

    else{

        ElementoLista *d_ancla = &(lista->ancla);
        ElementoLista *anterior = d_ancla->anterior;
        return anterior;
    }
}
