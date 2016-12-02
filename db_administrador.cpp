#include <iostream>
#include <string>
#include "Usuario.h"
#include "db_administrador.h"

db_administrador::db_administrador() {

}//Fin del metodo

db_administrador::db_administrador(string fecha):Usuario(nombre, correo, password) {
    this->fecha = fecha;
}//Fin
