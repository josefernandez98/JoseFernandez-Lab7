#include <iostream>
#include "Usuario.h"

using namespace std;

Usuario::Usuario() {

}//Fin

Usuario::~Usuario() {
    cout << "Destructor usuario..." << endl;
}//Fin

void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
}//Fin del metodo

void Usuario::setCorreo(string correo) {
    this->correo = correo;
}//Fin del metodo

void Usuario::setPassword(string password) {
    this->password = password;
}//Fin del metodo
