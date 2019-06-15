#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"
class Cliente: public Persona{
private:
string direccion;
string tel;
string tarjeta;
int pedidos;

public:
Cliente();
Cliente(string, string, string, int,string, string, int, int);

string getdireccion();
void setdireccion(string);

string gettel();
void settel(string);

string gettarjeta();
void settarjeta(string);

int getpedidos();
void setpedidos(int);
virtual int Ganancia();
string toString();
};
#endif

