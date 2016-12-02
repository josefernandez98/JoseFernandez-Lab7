#pragma once
#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class db_supervisor : Public Usuario {
    private:
        int contador;
    public:
        db_supervisor();
        db_supervisor(int);
        int getContador();
        void setContador();
};
