#pragma once
#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class db_administrador : public Usuario {
    private:
        string fecha;
    public:
        db_administrador();
        db_administrador(string);
        string getFecha();
        void setFecha();
        string toString();
};
