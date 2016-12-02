#pragma once
#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class db_intern : Public Usuario {
    private:
        int dias;
    public:
        db_intern();
        db_intern(int);
        int getDias();
        void setDias();
};
