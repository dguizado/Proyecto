all: prueba

#Ejecutable de prueba
prueba: funcionBuscar.o funcionConteo.o funcionInicializar.o funcionInsertarAntes.o funcionInsertarDespues.o funcionInsertarFin.o funcionInsertarInicio.o funcionPrimero.o funcionSacar.o funcionSacarTodos.o funcionSiguiente.o funcionUltimo.o funcionVacia.o funcionesAnterior.o
	gcc -o prueba funcionBuscar.o funcionConteo.o funcionInicializar.o funcionInsertarAntes.o funcionInsertarDespues.o funcionInsertarFin.o funcionInsertarInicio.o funcionPrimero.o funcionSacar.o funcionSacarTodos.o funcionSiguiente.o funcionUltimo.o funcionVacia.o funcionesAnterior.o

funcionBuscar.o: funcionBuscar.c miLista.h
	gcc -c funcionBuscar.c

funcionConteo.o: funcionConteo.c miLista.h
	gcc -c funcionConteo.c

funcionInicializar.o: funcionInicializar.c miLista.h
	gcc -c funcionInicializar.c

funcionInsertarAntes.o: funcionInsertarAntes.c miLista.h
	gcc -c funcionInsertarAntes.c

funcionInsertarDespues.o: funcionInsertarDespues.c miLista.h
	gcc -c funcionInsertarDespues.c

funcionInsertarFin.o: funcionInsertarFin.c miLista.h
	gcc -c funcionInsertarFin.c

funcionInsertarInicio.o: funcionInsertarInicio.c miLista.h
	gcc -c funcionInsertarInicio.c

funcionPrimero.o: funcionPrimero.c miLista.h
	gcc -c funcionPrimero.c

funcionSacar.o: funcionSacar.c miLista.h
	gcc -c funcionSacar.c

funcionSacarTodos.o: funcionSacarTodos.c miLista.h
	gcc -c funcionSacarTodos.c

funcionSiguiente.o: funcionSiguiente.c miLista.h
	gcc -c funcionSiguiente.c

funcionUltimo.o: funcionUltimo.c miLista.h
	gcc -c funcionUltimo.c

funcionVacia.o: funcionVacia.c miLista.h
	gcc -c funcionVacia.c

funcionesAnterior.o: funcionesAnterior.c miLista.h
	gcc -c funcionesAnterior.c


#Limpia archivos .o ejecutables y .so
clean:
	rm -f prueba *.o *.so
