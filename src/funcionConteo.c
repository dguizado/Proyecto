#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "miLista.h"

int Lista_Conteo(ListaEnlazada *lista){
    ElementoLista *i;
    int count=0;
    for (i= lista->ancla.siguiente; i = lista->ancla.anterior; i++){
        count ++;
    }
  return count;

}
