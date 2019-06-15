#include "Cliente.h"

Cliente::Cliente(){
}
Cliente::Cliente(string direccion ,string tel ,string tarjeta ,int pedidos,string nombre ,string identidad ,int edad ,int ganancias):Persona(nombre,identidad,edad,ganancias){
this->direccion=direccion;
this->tel=tel;
this->tarjeta=tarjeta;
this->pedidos=pedidos;
}
string Cliente::getdireccion(){
return direccion;
}
void Cliente::setdireccion(string direccion){
this->direccion=direccion;
}

string Cliente::gettel(){
return tel;
}
void Cliente::settel(string tel){
this->tel=tel;
}

string Cliente::gettarjeta(){
return tarjeta;
}
void Cliente::settarjeta(string tarjeta){
this->tarjeta=tarjeta;
}

int Cliente::getpedidos(){
return pedidos;
}
void Cliente::setpedidos(int pedidos){
this->pedidos=pedidos;
}
int Cliente::Ganancia(){
    return -100*pedidos;
}
string Cliente::toString(){

return nombre+"\n"+gettarjeta();
}

