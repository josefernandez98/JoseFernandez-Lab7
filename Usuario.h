#pragma once
#include <iostream>
#include <string>

using namespace std;

class Usuario {
    protected:
        Usuario();
        void setNombre(string);
        void setCorreo(string);
        void setPassword(string);
        string getNombre();
        string getCorreo();
        string getPassword();
        string nombre;
        string correo;
        string password;
        virtual ~Usuario();
        virtual int TamContra(string);
};
