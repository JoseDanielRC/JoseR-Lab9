#include "Orden.h"
Orden::Orden(){
}
Orden::Orden(Cliente* cliente ,NegocioA* negocio ,Repartidor* repartidor){

this->cliente=cliente;
this->negocio=negocio;
this->repartidor=repartidor;
this->tipo=tipo;
this->estado=estado;
}
Cliente* Orden::getcliente(){
return cliente;
}
void Orden::setcliente(Cliente* cliente){
this->cliente=cliente;
}

NegocioA* Orden::getnegocio(){
return negocio;
}
void Orden::setnegocio(NegocioA* negocio){
this->negocio=negocio;
}

Repartidor* Orden::getrepartidor(){
return repartidor;
}
void Orden::setrepartidor(Repartidor* repartidor){
this->repartidor=repartidor;
}

string Orden::gettipo(){
return tipo;
}
void Orden::settipo(string tipo){
this->tipo=tipo;
}

string Orden::getestado(){
return estado;
}
void Orden::setestado(string estado){
this->estado=estado;
}
string Orden::toString(){

return "***********************\n"
        "Cliente"+cliente->getnombre()+"\n"
        "Negocio"+negocio->getnombre()+"\n"
        "Repartidor"+repartidor->getnombre()+"\n"
        "************************";

}
