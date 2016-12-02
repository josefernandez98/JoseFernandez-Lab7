#pragma once
#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class db_supervisor : public Usuario {
    private:
        int contador;
    public:
        db_supervisor();
        db_supervisor(string, string, string, int);
        virtual ~db_supervisor();
        int getContador();
        void setContador();
        string toString();
};
