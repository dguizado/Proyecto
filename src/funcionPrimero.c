ElementoLista *Lista_Primero(ListaEnlazada *lista){
    if(lista->numeroElementos==0){//Si la lista esta vacia retorna NULL
        return NULL;
    }
    else{//Si la lista esta llena
        
        ElementoLista *d_ancla = &(lista->ancla); //Guarda direccion de memoria del ancla de la lista
        return d_ancla->siguiente;  //Retorna el siguiente de ancla que es el primer elemento 
    }
}
