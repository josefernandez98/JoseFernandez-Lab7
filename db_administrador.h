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
        virtual ~db_administrador();
        string getFecha();
        void setFecha();
        string toString();
};
