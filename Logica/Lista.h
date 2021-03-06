//
// Created by jose on 15/04/19.
//

#ifndef MEMORIA_VIRTUAL_LISTA_H
#define MEMORIA_VIRTUAL_LISTA_H

#include <string>
#include "Nodo.h"

using namespace std;

class Lista {

public:

    Nodo* head = nullptr;
    int largo = 0;
    int tiempoTotal;

    int getLargo();
    void setLargo(int largo);
    void insertarNodo (string proceso, int tiempo, bool estado);
    void insertarNodo (string proceso, int tiempo);
    void eliminarNodo (string proceso);
    void mostrarLista ();
    void actualizar();
    int buscarNodo(string proceso, Lista* linea);
    void verificarEstado();
    void actualizar2();

private:
    void actualizarVerdaderos();
    void borrarCompletados();
    void seleccionarVerdaderos();
    void dormirPrimerVerdadero();
    int contarActivos();

};


#endif //MEMORIA_VIRTUAL_LISTA_H

