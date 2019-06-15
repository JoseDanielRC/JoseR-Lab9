#include <iostream>
#include <string>
#include "Orden.h"
#include <vector>
#include <fstream>
#include "Persona.h"
#include "Empleado.h"
#include "Cliente.h"
using std::ofstream;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std:: string;
void EscribirArchivo(char* filename,Orden* orden){
    ofstream file;
    file.open(filename,std::ios::app);
    file<<orden->toString()<<endl;
    file.close();
}
int main(){
    char resp='s';
    int opcion=0,seleccion=0,tipopersona=0;
    vector<Persona*>personas;
    vector<NegocioA*>negocios;
    vector<Orden*>ordenes;
    while(resp=='s'){
        cout<<"Ingrese una opcion"<<endl
        <<"1.Personas"<<endl
        <<"2.Negocios"<<endl;
        cin>>opcion;
        switch (opcion)
        {
            case 1:
                cout<<"Ingrese una opcion"<<endl
                 <<"1.Agregar Persona"<<endl
                <<"2.Eliminar Persona"<<endl
                <<"3.Listar Personas"<<endl;
                cin>>seleccion;
                switch (seleccion)
                {
                    case 1:{
                    string nombre;
                    string identidad;
                    int edad;
                    int ganancias;
                     cout<<"Ingrese nombre";
                            cin>>nombre;
                            cout<<"Ingrese num identidad";
                            cin>>identidad;
                            cout<<"Ingrese edad";
                            cin>>edad;
                            cout<<"Ingrese ganancia";
                            cin>>ganancias;
                            cout<<"Ingrese una opcion"<<endl
                                <<"1.Empleado"<<endl
                                <<"2.Repartidor"<<endl
                                <<"3.Cliente"<<endl;
                                cin>>tipopersona;
                    switch (tipopersona)
                    {
                        case 1:{
                            double horas;
                            string local;
                            int ordenesatendidas;
                            cout<<"Ingrese las horas de trabajo: ";
                            cin>>horas;
                            cout<<"Ingrese local de trabajo: ";
                            cin>>local;
                            cout<<"Ingrese ordenes atendidas: ";
                            cin>>ordenesatendidas;
                            personas.push_back(new Empleado(horas,local,ordenesatendidas,nombre,identidad,edad,ganancias));
                            }break;
                        case 2:{
                            string placa;
                            string zona;
                            int ordenes;
                            cout<<"Ingrese num de placa: ";
                            cin>>placa;
                            cout<<"Ingrese zona trabajo: ";
                            cin>>zona;
                            cout<<"Ingrese numero de ordenes: ";
                            cin>>ordenes;
                            personas.push_back(new Repartidor(placa,zona,ordenes,nombre,identidad,edad,ganancias));
                            }break;
                        case 3:{
                            string direccion;
                            string tel;
                            string tarjeta;
                            int pedidos;
                            cout<<"Ingrese direccion: ";
                            cin>>direccion;
                            cout<<"Ingrese telefono: ";
                            cin>>tel;
                            cout<<"Ingrese numero de tarjeta: ";
                            cin>>tarjeta;
                            cout<<"Ingrese numero de pedidos: ";
                            cin>>pedidos;
                            
                            personas.push_back(new Cliente(direccion,tel,tarjeta,pedidos,nombre,identidad,edad,ganancias));
                            }break;
                        }

                    }break;

                    case 2:{
                        int posicion=0;
                        cout<<"Ingrese la posicion de persona a eliminar"<<endl;
                        personas.erase(personas.begin()+posicion);
                        }
                        
                        break;
                    case 3:{
                        cout<<"Clientes"<<endl;
                        for(int i=0; i<personas.size();i++){
                            if(dynamic_cast<Cliente*>(personas[i])){
                                cout<< i+1<<".";
                                cout<<personas[i]->toString();
                                cout<<endl;
                                cout<<"Ganancia: "<<personas[i]->Ganancia();
                                cout<<endl;
                            }
                            
                        }
                        cout<<endl;
                        cout<<"Empleado"<<endl;
                        for(int i=0; i<personas.size();i++){
                            if(dynamic_cast<Empleado*>(personas[i])){
                                cout<< i+1<<".";
                                cout<<personas[i]->toString();
                                cout<<endl;
                                cout<<"Ganancia: "<<personas[i]->Ganancia();
                                cout<<endl;
                            }
                            
                        }
                        cout<<endl;
                        cout<<"Repartidor"<<endl;
                        for(int i=0; i<personas.size();i++){
                            if(dynamic_cast<Repartidor*>(personas[i])){
                                cout<< i+1<<".";
                                cout<<personas[i]->toString();
                                cout<<endl;
                                cout<<"Ganancia: "<<personas[i]->Ganancia();
                                cout<<endl;
                            }
                            
                        }
                        cout<<endl;
                    }
                    break;
        }
        break;
        case 2:{
            int opnegocio=0;
            cout<<"Ingrese una opcion"<<endl
            <<"1.Crear un negocio"<<endl
            <<"2.Eliminar"<<endl;
            cin>>opnegocio;
            switch(opnegocio){
                case 1:{
                    char productos='s';
                    string nombrenegocio;
                    string ubicacionnegocio;
                    int numlocales=0;
                    cout<<"Ingrese nombre de negocio"<<endl;
                    cin>>nombrenegocio;
                    cout<<"Ingrese ubicacion de negocio"<<endl;
                    cin>>ubicacionnegocio;
                    cout<<"Ingrese numero de locales"<<endl;
                    cin>>numlocales;
                    negocios.push_back(new NegocioA(nombrenegocio,ubicacionnegocio,numlocales));
                    string nombreproducto;
                    string tipoproducto;
                    cout<<"Productos:"<<endl;
                    while(productos=='s'){
                        cout<<"nombre:"<<endl;
                        cin>>nombreproducto;
                        cout<<"tipo:"<<endl;
                        cin>>tipoproducto;
                        negocios[negocios.size()-1]->setproductos(new Producto(nombreproducto,tipoproducto));
                        cout<<"desea agregar otro producto[s/n]"<<endl;
                        cin>>productos;
                    }
                }
                    break;
                case 2:{
                    
                    for(int i=0;i<negocios.size();i++){
                        cout<<i+1<<"."<<negocios[i]->toString()<<endl;
                        negocios[i]->listarproductos();
                    }
                }
                    break;
            }
        }
        break;
        case 3:{
            int poscliente=0,posnegocio=0,posrepartidor=0;
            cout<<"Ingrese el numero de lista del cliente (listado anteriormente)";
            cin>>poscliente;
            cout<<"Ingrese el numero de lista del negocio (listado anteriormente)";
            cin>>posnegocio;
            cout<<"Ingrese el numero de lista del repartidor (listado anteriormente)";
            cin>>posrepartidor;
            Cliente* cliente=dynamic_cast<Cliente*>(personas[poscliente]);
            Repartidor* repartidor=dynamic_cast<Repartidor*>(personas[posrepartidor]);
            ordenes.push_back(new Orden(cliente,negocios[posnegocio],repartidor));
            dynamic_cast<Cliente*>(personas[poscliente])->setpedidos(cliente->getpedidos()+1);
            dynamic_cast<Repartidor*>(personas[posrepartidor])->setordenes(repartidor->getordenes()+1);
            for (int i = 0; i < personas.size(); i++)
            {
               if(dynamic_cast<Empleado*>(personas[i])){
                                dynamic_cast<Empleado*>(personas[i])->setordenesatendidas(dynamic_cast<Empleado*>(personas[i])->getordenesatendidas()+1))
                            } 
                
            }
            


        }break;
        }
    }
    for(int i=0;i<personas.size();i++){
        delete personas[i];
    }
    for(int i=0;i<negocios.size();i++){
        delete negocios[i];
    }
    for(int i=0;i<ordenes.size();i++){
        delete ordenes[i];
    }

    return 0;
}
