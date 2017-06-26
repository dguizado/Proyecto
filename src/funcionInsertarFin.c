int Lista_InsertarFin(ListaEnlazada *lista, void *objeto){
    ElementoLista * nuevoElemento=(ElementoLista *)malloc(sizeof(ElementoLista));
    if(!nuevoElemento){
        return 0;
    }   
    nuevoElemento->objeto = objeto;
    
    ElementoLista *d_ancla = &(lista->ancla);
    if (lista->numeroElementos==0){
        
        d_ancla->siguiente=nuevoElemento;
        d_ancla->anterior=nuevoElemento;
        nuevoElemento->siguiente=d_ancla;
        nuevoElemento->anterior=d_ancla;
        lista->numeroElementos++;
        return 1;
    }
    else{
        ElementoLista *ultimo = d_ancla->anterior;
        nuevoElemento->anterior = ultimo;
        nuevoElemento->siguiente = d_ancla;
        ultimo->siguiente = nuevoElemento;
        d_ancla->anterior = nuevoElemento;
        lista->numeroElementos++;
        return 1;
    }
    return 0;
}
