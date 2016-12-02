#include <iostream>
#include <string>
#include "Usuario.h"
#include "db_intern.h"

db_intern::db_intern() {

}//Fin del metodo

db_intern::db_intern(int dias):Usuario(nombre, correo, password) {
    this->dias = dias;
}//Fin
