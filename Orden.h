#ifndef ORDEN_H
#define ORDEN_H
#include "Cliente.h"
#include "NegocioA.h"
#include "Repartidor.h"
#include <string>
using std::string;
class Orden{
private:
    Cliente* cliente;
    NegocioA* negocio;
    Repartidor* repartidor;
    string tipo;
    string estado;

public:
    Orden();
    Orden(Cliente*, NegocioA*, Repartidor*);

    Cliente* getcliente();
    void setcliente(Cliente*);

    NegocioA* getnegocio();
    void setnegocio(NegocioA*);

    Repartidor* getrepartidor();
    void setrepartidor(Repartidor*);

    string gettipo();
    void settipo(string);

    string getestado();
    void setestado(string);

    string toString();
};
#endif
