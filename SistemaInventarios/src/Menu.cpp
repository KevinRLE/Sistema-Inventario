#include "Menu.h"
//funcionamiento del menú (kevin)
Menu::Menu()
{
    //ctor
}


void Menu::mostrarOpciones(Inventario& inventario, Facturacion& factura) {
    int opcion;
    do {
        cout<<"*-----------------------------*"<< endl;
        cout<<"MENU OPCIONES DEL PROGRAMA:" << endl;
        cout << "1. Agregar Producto\n2. Kardex\n3. Crear Factura Cliente.\n4. Salir del Programa\n";
        cout<<"*-----------------------------*"<< endl;
        cout<<"Ingrese una Opcion"<< endl;
        cin >> opcion;

        if (opcion == 1) {
            int codigo, stock;
            float precio;
            string nombre;
            system("cls");
            cout << "     GESTION DE INVENTARIO" << endl;
            cout<<"*-----------------------------*"<< endl;
            cout << "Codigo: "; cin >> codigo;
            cout << "Nombre: "; cin >> nombre;
            cout << "Precio: "; cin >> precio;
            cout << "Stock: "; cin >> stock;
            inventario.agregarProducto(codigo, nombre, precio, stock);
        } else if (opcion == 2) {
            inventario.mostrarInventario();
        } else if (opcion == 3) {
            factura.generarFactura(inventario);
        }

    } while (opcion != 4);
    system("cls");
}


Menu::~Menu()
{
    //dtor
}
