#include <iostream>
#include <string>
#include <sstream>
#include "Usuario.h"
#include "db_manager.h"

db_manager::db_manager() {

}//Fin del metodo

db_manager::db_manager(string nombre, string correo, string password, int sueldo):Usuario(nombre, correo, password) {
    this->sueldo = sueldo;
}//Fin

string db_manager::toString() {
    stringstream ss;
    ss << Usuario::toString() << ";" << sueldo << ";";
    return ss.str();
}//Fin

db_manager::~db_manager() {

}//Fin
