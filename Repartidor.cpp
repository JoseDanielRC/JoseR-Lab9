#include "Repartidor.h"

Repartidor::Repartidor(){
}
Repartidor::Repartidor(string placa ,string zona ,int ordenes,string nombre ,string identidad ,int edad ,int ganancias):Persona(nombre,identidad,edad,ganancias){

this->placa=placa;
this->zona=zona;
this->ordenes=ordenes;
}
string Repartidor::getplaca(){
return placa;
}
void Repartidor::setplaca(string placa){
this->placa=placa;
}

string Repartidor::getzona(){
return zona;
}
void Repartidor::setzona(string zona){
this->zona=zona;
}

int Repartidor::getordenes(){
return ordenes;
}
void Repartidor::setordenes(int ordenes){
this->ordenes=ordenes;
}
int Repartidor::Ganancia(){
    return 40*ordenes;
}
string Repartidor::toString(){

return nombre+"\n"+getplaca();
}
