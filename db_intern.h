#pragma once
#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class db_intern : public Usuario {
    private:
        int dias;
    public:
        db_intern();
        db_intern(string, string, string, int);
        virtual ~db_intern();
        int getDias();
        void setDias();
        string toString();
};
