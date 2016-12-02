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
        db_manager(string, string, string, int);
        virtual ~db_manager();
        int getSueldo();
        void setSueldo();
        string toString();
};
