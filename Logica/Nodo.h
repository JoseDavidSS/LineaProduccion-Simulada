//
// Created by jose on 15/04/19.
//

#ifndef MEMORIA_VIRTUAL_NODO_H
#define MEMORIA_VIRTUAL_NODO_H

#include <string>

using namespace std;



class Nodo {

public:

    string proceso;
    int tiempo;
    bool estado;

    Nodo(string procesos, int tiempos, bool estados){
        proceso = procesos;
        tiempo = tiempos;
        estado = estados;
    }

    Nodo* next = nullptr;

    // Methods

    void setProceso(string letter);
    string getProceso();

    void setTiempo(int point);
    int getTiempo();

    void setEstadoF();
    void setEstadoT();
    bool getEstado();



};


#endif //MEMORIA_VIRTUAL_NODO_H
