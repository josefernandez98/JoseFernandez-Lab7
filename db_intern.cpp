#include <iostream>
#include <string>
#include <sstream>
#include "Usuario.h"
#include "db_intern.h"

db_intern::db_intern() {

}//Fin del metodo

db_intern::db_intern(string nombre, string correo, string password, int dias):Usuario(nombre, correo, password) {
    this->dias = dias;
}//Fin

string db_intern::toString() {
    stringstream ss;
    ss << Usuario::toString() << " " << dias << " ";
    return ss.str();
}

db_intern::~db_intern() {

}//Fin
