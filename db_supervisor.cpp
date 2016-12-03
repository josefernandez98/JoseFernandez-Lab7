#include <iostream>
#include <string>
#include <sstream>
#include "Usuario.h"
#include "db_supervisor.h"

db_supervisor::db_supervisor() {

}//Fin del metodo

db_supervisor::db_supervisor(string nombre, string correo, string password, int contador):Usuario(nombre, correo, password) {
    this->contador = contador;
}//Fin

string db_supervisor::toString() {
    stringstream ss;
    ss <<  Usuario::toString() << ";" << contador << ";";
    return ss.str();
}//Fin

db_supervisor::~db_supervisor() {

}//Fin del destructor
