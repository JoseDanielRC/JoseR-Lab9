#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "Persona.h"
class Empleado:public Persona{
private:
double horas;
string local;
int ordenesatendidas;

public:
Empleado();
Empleado(double, string, int,string, string, int, int);

double gethoras();
void sethoras(double);

string getlocal();
void setlocal(string);

int getordenesatendidas();
void setordenesatendidas(int);

string toString();
virtual int Ganancia();
};
#endif
