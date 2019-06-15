#include "Empleado.h"

Empleado::Empleado(){
}
Empleado::Empleado(double horas ,string local ,int ordenesatendidas,string nombre ,string identidad ,int edad ,int ganancias):Persona(nombre,identidad,edad,ganancias){

this->horas=horas;
this->local=local;
this->ordenesatendidas=ordenesatendidas;
}
double Empleado::gethoras(){
return horas;
}
void Empleado::sethoras(double horas){
this->horas=horas;
}

string Empleado::getlocal(){
return local;
}
void Empleado::setlocal(string local){
this->local=local;
}

int Empleado::getordenesatendidas(){
return ordenesatendidas;
}
void Empleado::setordenesatendidas(int ordenesatendidas){
this->ordenesatendidas=ordenesatendidas;
}
int Empleado::Ganancia(){
    return 30*ordenesatendidas+ordenesatendidas;
}
string Empleado::toString(){

return nombre+"\n"+getlocal();
}

