run: Main.o Persona.o Cliente.o Repartidor.o Empleado.o NegocioA.o Producto.o Orden.o 
	g++ Main.o Persona.o Cliente.o Repartidor.o Empleado.o NegocioA.o Producto.o Orden.o -o run
Main.o: Main.cpp Persona.h Cliente.h Repartidor.h Empleado.h NegocioA.h Producto.h Orden.h 
	g++ -c Main.cpp
Persona.o: Persona.h Persona.cpp
	g++ -c Persona.cpp
Cliente.o: Cliente.h Cliente.cpp
	g++ -c Cliente.cpp
Repartidor.o: Repartidor.h Repartidor.cpp
	g++ -c Repartidor.cpp
Empleado.o: Empleado.h Empleado.cpp
	g++ -c Empleado.cpp
NegocioA.o: NegocioA.h NegocioA.cpp
	g++ -c NegocioA.cpp
Producto.o: Producto.h Producto.cpp
	g++ -c Producto.cpp
Orden.o: Orden.h Orden.cpp Cliente.h NegocioA.h Repartidor.h
	g++ -c Orden.cpp
