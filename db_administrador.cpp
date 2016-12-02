#include <iostream>
#include <string>
#include <sstream>
#include "Usuario.h"
#include "db_administrador.h"

db_administrador::db_administrador() {

}//Fin del metodo

db_administrador::db_administrador(string fecha):Usuario(nombre, correo, password) {
    this->fecha = fecha;
}//Fin

string db_administrador::toString() {
    stringstream ss;
    ss << Usuario::toString() << " Fecha: " << fecha << endl;
    return ss.str();
}//Fin del metodo

db_administrador::~db_administrador() {

}//Fin
