#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>
using std::string;
class Persona{
protected:
string nombre;
string identidad;
int edad;
int ganancias;

public:
Persona();
Persona(string, string, int, int);

string getnombre();
void setnombre(string);

string getidentidad();
void setidentidad(string);

int getedad();
void setedad(int);

int getganancias();
void setganancias(int);

virtual string toString();
virtual int Ganancia();
};
#endif
