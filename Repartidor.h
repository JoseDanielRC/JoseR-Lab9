#ifndef REPARTIDOR_H
#define REPARTIDOR_H
#include "Persona.h"
class Repartidor:public Persona{
private:
string placa;
string zona;
int ordenes;

public:
Repartidor();
Repartidor(string, string, int,string, string, int, int);

string getplaca();
void setplaca(string);

string getzona();
void setzona(string);

int getordenes();
void setordenes(int);
virtual int Ganancia();
string toString();
};
#endif

