#pragma once
#include <iostream>
#include <string>

using namespace std;

class Usuario {
    public:
        Usuario();
        Usuario(string, string, string);
        virtual ~Usuario();
    protected:
        void setNombre(string);
        void setCorreo(string);
        void setPassword(string);
        string getNombre();
        string getCorreo();
        string getPassword();
        string nombre;
        string correo;
        string password;
        string toString();
        virtual int TamContra(string);
};
