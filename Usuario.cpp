#include <iostream>
#include "Usuario.h"

using namespace std;

Usuario::Usuario () {

}//Fin

Usuario::Usuario (string nomrbe, string correo, string password) {
    this->nombre = nombre;
    this->correo = correo;
    this->password = password;
}//Fin del metodo


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

string Usuario::getCorreo() {
    return correo;
}//Fin del metodo

string Usuario::getNombre() {
    return nombre;
}//Fin del metodo

string Usuario::getPassword() {
    return password;
}//Fin del metodo

int Usuario::TamContra(string clave) {
    int size = clave.size();
    return size;
}//Fin del metodo
