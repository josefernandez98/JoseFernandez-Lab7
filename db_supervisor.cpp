#include <iostream>
#include <string>
#include "Usuario.h"
#include "db_supervisor.h"

db_supervisor::db_supervisor() {

}//Fin del metodo

db_supervisor::db_supervisor(int contador):Usuario(nombre, correo, password) {
    this->contador = contador;
}//Fin
