#include <iostream>
using namespace std;

int main()
{
    // Karla Estefany Hernandez Pocasangre
    // Declaracion de Variables
    int mes = 0;

    // Ingreso de Datos
    cout << "Ingrese un numero correspondiente a cada mes: ";
    cin >> mes;

    // Salida de datos
    switch (mes)
    {
    case (1):
    case (4):
    case (7):
    case (9):
    case (10):
    case (11):
    case (12):
        cout << "El mes seleccionado tiene 4 semanas completas" << endl;
        break;
    case (2):
    case (3):
    case (5):
    case (6):
    case (8):
        cout << "El mes seleccionado tiene 3 semanas completas" << endl;
        break;
    default:
        cout << "Ingrese un numero valido" << endl;
        break;
    }

    return 0;
}