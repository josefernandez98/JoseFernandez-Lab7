#include <iostream>
#include <string>
#include <sstream>
#include "Usuario.h"
#include "db_supervisor.h"

db_supervisor::db_supervisor() {

}//Fin del metodo

db_supervisor::db_supervisor(int contador):Usuario(nombre, correo, password) {
    this->contador = contador;
}//Fin

string db_supervisor::toString() {
    stringstream ss;
    ss << Usuario::toString() << " Contador: " << contador << endl;
    return ss.str();
}//Fin

db_supervisor::~db_supervisor() {

}//Fin del destructor
