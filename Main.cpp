#include <iostream>
#include <vector>
#include <fstream>
#include "Usuario.h"
#include "db_administrador.h"
#include "db_intern.h"
#include "db_manager.h"
#include "db_supervisor.h"
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void MenuAdmin();
void MenuIntern();
void MenuManager();
void MenuSupervisor();

int main(int argc, char const *argv[]) {
    vector<db_intern> interns;
    vector<db_manager> managers;
    vector<db_supervisor> supervisors;
    Usuario* administrador = new db_administrador("admin", "admin@jose", "admin123", "2016");
    string nombre = "", pass = "";
    cout << "Ingrese el nombre del usuario:";
    cin >> nombre;
    cout << endl << "Ingrese la password del usuario:";
    cin >> pass;
    if ((administrador->getNombre() == nombre) && (administrador->getPassword() == pass)) {
        while (true) {
            MenuAdmin();
        }
    } else {
        for (int i = 0; i < 10; i++) {

        }//Fin del for
        for (int i = 0; i < 10; i++) {

        }//Fin del for
        for (int i = 0; i < 10; i++) {

        }//Fin del for
    }//Fin del if padre



    return 0;
}//Fin del main

void MenuAdmin() {
    Usuario* instancia = new Usuario();
    string nombre = "", correo = "", password = "";
    int sueldo = 0, dias = 0, contador = 0;
    int opcion = 0, subOpcion = 0;
    vector<db_intern*> interns;
    vector<db_manager*> managers;
    vector<db_supervisor*> supervisors;
    db_manager* manager;
    db_intern* intern;
    db_supervisor* supervisor;
    cout << "---------- Menu Administrador ----------" << endl;
    cout << "1. Crear Usuario." << endl;
    cout << "2. Eliminar Usuario." << endl;
    cout << "Ingrese su opcion:";
    cin >> opcion;
    if ((opcion <= 0) || (opcion > 2)) {
        for (;(opcion <= 0) || (opcion > 2);) {
            cout << "Valor invalido." << endl;
            cout << "Ingrese su opcion:";
            cin >> opcion;
        }//Fin del for
    }//Fin del if
    if (opcion == 1) {
        cout << "1. Crear Manager." << endl;
        cout << "2. Crear Intern." << endl;
        cout << "3. Crear Supervisor." << endl;
        cout << "Ingrese su opcion:";
        cin >> subOpcion;
        if ((subOpcion <= 0) || (subOpcion > 3)) {
            for (;(subOpcion <= 0) || (subOpcion > 3);) {
                cout << "Valor invalido." << endl;
                cout << "Ingrese su opcion:";
                cin >> opcion;
            }//Fin del for
        }//Fin del if

        if (subOpcion == 1) {
            cout << "Ingrese el nombre de usuario:";
            cin >> nombre;
            cout << endl << "Ingrese el correo del usuario:";
            cin >> correo;
            cout << endl << "Ingrese la contrasena del usuario:";
            cin >> password;
            if (password.size() < 16) {
                for (;password.size() < 16;) {
                    cout << "Cantidad de caracteres invalida." << endl;
                    cout << endl << "Ingrese la contrasena del usuario:";
                    cin >> password;
                }
            }
            cout << endl << "Ingrese el sueldo del usuario:";
            cin >> sueldo;

            if (sueldo <0) {
                for (; sueldo < 0;) {
                    cout << "Sueldo invalido." << endl;
                    cout << "Ingrese el sueldo del usuario:";
                    cin >> sueldo;
                }//Fin del for
            }//Fin del if sueldo

            manager = new db_manager(nombre, correo, password, sueldo);
            managers.push_back(manager);
            fstream file;
            file.open("Managers.txt", ios::app);
            for (int i = 0; i < managers.size(); i++) {
                file << managers[i]->toString();
                file << endl;
            }//Fin del for
            manager = NULL;
        }//Fin subopcion 1

        if (subOpcion == 2) {
            cout << "Ingrese el nombre de usuario:";
            cin >> nombre;
            cout << endl << "Ingrese el correo del usuario:";
            cin >> correo;
            cout << endl << "Ingrese la contrasena del usuario:";
            cin >> password;
            if (password.size() < 8) {
                for (;password.size() < 8;) {
                    cout << "Cantidad de caracteres invalida." << endl;
                    cout << endl << "Ingrese la contrasena del usuario:";
                    cin >> password;
                }
            }
            cout << endl << "Ingrese el numero de dias del usuario:";
            cin >> dias;
            if (dias < 0) {
                for (; dias < 0;) {
                    cout << "Valor de dias invalido." << endl;
                    cout << "Ingrese el numero de dias del usuario:";
                    cin >> dias;
                }//Fin del for
            }//Fin del if sueldo
            intern = new db_intern(nombre, correo, password, dias);
            interns.push_back(intern);
            fstream file;
            file.open("Interns.txt", ios::app);
            for (int i = 0; i < interns.size(); i++) {
                file << interns[i]->toString();
                file << endl;
            }//Fin del for
            intern = NULL;
        }//Fin subOpcion2

        if (subOpcion == 3) {
            cout << "Ingrese el nombre de usuario:";
            cin >> nombre;
            cout << endl << "Ingrese el correo del usuario:";
            cin >> correo;
            cout << endl << "Ingrese la contrasena del usuario:";
            cin >> password;
            if (password.size() < 8) {
                for (;password.size() < 8;) {
                    cout << "Cantidad de caracteres invalida." << endl;
                    cout << endl << "Ingrese la contrasena del usuario:";
                    cin >> password;
                }
            }
            contador++;
            supervisor = new db_supervisor(nombre, correo, password, contador);
            supervisors.push_back(supervisor);

            fstream file;
            file.open("Supervisors.txt", ios::app);
            for (int i = 0; i < supervisors.size(); i++) {
                file << supervisors[i]->toString();
                file << endl;
            }//Fin del for

            supervisor = NULL;
        }//Fin subOpcion3

    }//Fin del if opcion 1

    if (opcion == 2) {
        db_manager* manager;
        db_intern* intern;
        db_supervisor* supervisor;
        manager = new db_manager("Miguel", "Miguel@", "pass", 20);
        intern = new db_intern("Moi", "Moi@", "contra", 10);
        supervisor = new db_supervisor("fuck", "fuck", "pasw", 0);
        int pos = 0;
        cout << "1. Eliminar Manager." << endl;
        cout << "2. Eliminar Intern." << endl;
        cout << "3. Eliminar Supervisor." << endl;
        cout << "Ingrese su opcion:";
        cin >> subOpcion;
        if ((subOpcion <= 0) || (subOpcion > 3)) {
            for (;(subOpcion <= 0) || (subOpcion > 3);) {
                cout << "Valor invalido." << endl;
                cout << "Ingrese su opcion:";
                cin >> opcion;
            }//Fin del for
        }//Fin del if

        if (subOpcion == 1) {
            string name = "", email = "", PASS = "", money = "", days = "";
            ifstream infile;
            infile.open("Managers.txt");
            while (!infile.eof()) {
                getline(infile, name, ';');
                getline(infile, email, ';');
                getline(infile, PASS, ';');
                getline(infile, money, ';');
                managers.push_back(new db_manager(name, email, PASS, atoi(money.c_str())));
            }//Fin del while
            cout << "Ingrese la posicion del usuario:";
            cin >> pos;
            if ((pos < 0) || (pos > managers.size())) {
                for (;(pos < 0) || (pos > managers.size());) {
                    cout << "Posicion invalida." << endl;
                    cout << "Ingrese la posicion del usuario:";
                    cin >> pos;
                }//Fin del for
                cout << endl;
            }//Fin del if
            managers.erase(managers.begin() + pos);
            if (remove("Managers.txt") != 0) {
                perror("No se borro");
            } else {
                puts("Se borro.");
            }
            fstream file;
            file.open("Managers.txt");
            for (int i = 0; i < managers.size(); i++) {
                file << managers[i]->toString();
                file << endl;
            }//Fin del for
            manager = NULL;
        }//Fin subopcion 1

        if (subOpcion == 2) {

            cout << endl << "Ingrese la posicion del usuario:";
            cin >> pos;
            if ((pos < 0) || (pos > interns.size())) {
                for (;(pos < 0) || (pos > interns.size());) {
                    cout << "Valor invalido." << endl;
                    cout << "Ingrese la posicion del usuario:";
                    cin >> pos;
                }//Fin del for
            }//Fin del if sueldo
            fstream file;
            file.open("Interns.txt");
            for (int i = 0; i < interns.size(); i++) {
                file << interns[i]->toString();
                file << endl;
            }//Fin del for
            intern = NULL;
        }//Fin subOpcion2

        if (subOpcion == 3) {
            cout << "Ingrese el nombre de usuario:";
            cin >> nombre;
            cout << endl << "Ingrese el correo del usuario:";
            cin >> correo;
            cout << endl << "Ingrese la contrasena del usuario:";
            cin >> password;
            contador++;
            supervisor = new db_supervisor(nombre, correo, password, contador);
            supervisors.push_back(supervisor);
            fstream file;
            file.open("Supervisors.txt", ios::app);
            for (int i = 0; i < supervisors.size(); i++) {
                file << supervisors[i]->toString();
                file << endl;
            }//Fin del for
            supervisor = NULL;
        }//Fin del if opcion2
    }
}//Fin del menu admin
