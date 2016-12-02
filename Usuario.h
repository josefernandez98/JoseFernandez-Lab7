#pragma once
#include <iostream>
#include <string>

using namespace std;

class Usuario {
    public:
        Usuario();
        Usuario(string, string, string);
        virtual ~Usuario();
        virtual void setNombre(string);
        virtual void setCorreo(string);
        virtual void setPassword(string);
        virtual string getNombre();
        virtual string getCorreo();
        virtual string getPassword();
        string nombre;
        string correo;
        string password;
        string toString();
        virtual int TamContra(string);
};
