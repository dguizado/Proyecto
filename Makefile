#Genera el Ejecutable
prueba:src/*.c
	@echo "***Generando Archivos Objetivo***"
	@echo " "
	@cp include/miLista.h src/ 
	gcc -Wall -c src/*.c
	@mv *.o obj/
	@rm src/miLista.h
	@echo " "
	@echo "***Generando Libreria Compartida***"
	@echo " "
	@cp include/miLista.h src/
	gcc -Wall -shared -fPIC src/*.c -o lib/libmilista.so
	@rm src/miLista.h
	@echo " "
	@echo "***Generando Ejecutable***"
	@echo " "
	gcc -Wall obj/*.o lib/libmilista.so -o prueba
	





.PHONY:clean

clean:
	rm -f obj/*.o prueba lib/*.so
	
