#pragma once
#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class db_manager : public Usuario {
    private:
        int sueldo;
    public:
        db_manager();
        db_manager(int);
        int getSueldo();
        void setSueldo();
};
