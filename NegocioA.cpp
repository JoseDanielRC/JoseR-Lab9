#include "NegocioA.h"
#include <iostream>
using std::cout;
using std::endl;

NegocioA::NegocioA(){
}
NegocioA::NegocioA(string nombre ,string ubicacion ,int locales){

this->nombre=nombre;
this->ubicacion=ubicacion;
this->locales=locales;
}
string NegocioA::getnombre(){
return nombre;
}
void NegocioA::setnombre(string nombre){
this->nombre=nombre;
}

string NegocioA::getubicacion(){
return ubicacion;
}
void NegocioA::setubicacion(string ubicacion){
this->ubicacion=ubicacion;
}

int NegocioA::getlocales(){
return locales;
}
void NegocioA::setlocales(int locales){
this->locales=locales;
}
vector<Producto*> NegocioA::getproductos(){
return productos;
}
void NegocioA::setproductos(Producto* producto){
    productos.push_back(producto);
}
void NegocioA::listarproductos(){
    for(int i=0;i<productos.size();i++){
        cout<<productos[i]->getnombre()<<endl;
    }
    
}
string NegocioA::toString(){
return "Nombre: "+nombre;
}
