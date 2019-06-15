
#ifndef NEGOCIOA_H
#define NEGOCIOA_H
#include "Producto.h"
#include <vector>
#include <string>
using std::string;
using std::vector;
class NegocioA{
private:
string nombre;
string ubicacion;
int locales;
vector<Producto*> productos;

public:
NegocioA();
NegocioA(string, string, int);

string getnombre();
void setnombre(string);

string getubicacion();
void setubicacion(string);

int getlocales();
void setlocales(int);

vector<Producto*> getproductos();
void setproductos(Producto*);
void listarproductos();

string toString();
};
#endif

