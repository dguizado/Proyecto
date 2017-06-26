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
