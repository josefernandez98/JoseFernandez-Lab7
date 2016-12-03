#include <iostream>
#include <string>
#include <sstream>
#include "Usuario.h"
#include "db_administrador.h"

db_administrador::db_administrador() {

}//Fin del metodo

db_administrador::db_administrador(string nombre, string correo, string password, string fecha):Usuario(nombre, correo, password) {
    this->fecha = fecha;
}//Fin

string db_administrador::toString() {
    stringstream ss;
    ss << Usuario::toString() << ";" << fecha << ";";
    return ss.str();
}//Fin del metodo


db_administrador::~db_administrador() {

}//Fin
