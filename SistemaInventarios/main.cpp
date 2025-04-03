#include <iostream>
#include "Menu.h"

//Menú Kevin
using namespace std;



int main() {
    Inventario inventario;
    Facturacion factura;
    Menu menu;

    menu.mostrarOpciones(inventario, factura);

    return 0;
}

