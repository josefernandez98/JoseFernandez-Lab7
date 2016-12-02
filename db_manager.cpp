#include <iostream>
#include <string>
#include "Usuario.h"
#include "db_manager.h"

db_manager::db_manager() {

}//Fin del metodo

db_manager::db_manager(int sueldo):Usuario(nombre, correo, password) {
    this->sueldo = sueldo;
}//Fin
