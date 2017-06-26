int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
    if(lista->numeroElementos==0){
        return 0;
    }
    else {
        ElementoLista *nuevoElemento = (ElementoLista *)malloc(sizeof(ElementoLista));
            ElementoLista *temp = elemento->anterior;
            nuevoElemento->siguiente=elemento;
            nuevoElemento->anterior=temp;	
            nuevoElemento->objeto=objeto;		
            elemento->anterior=nuevoElemento;
            temp->siguiente=nuevoElemento;
            lista->numeroElementos++;
            return 1;
    }
}
