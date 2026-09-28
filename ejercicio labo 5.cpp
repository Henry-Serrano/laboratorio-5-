#include <iostream>
using namespace std;

int main()
{
    int opcion = 0;
    float radio = 0;
    float lado = 0;
    float base = 0;
    float altura = 0;
    cout << "elige una opcion entre 1 circulo, 2cuadrado y 3 triangulo: ";
    cin >> opcion;

    switch (opcion) {
    case 1:
        cout << "has seleccionado la opcion de circulo/n";
        cout << "ingresa el radio del circulo: ";
        cin >> radio;
        cout << "el area del circulo es: " << 3.14159 * radio * radio << endl;
        break;
    case 2:
        cout << "has seleccionado la opcion de cuadrado/n";
        cout << "ingresa el lado del cuadrado: ";
        cin >> lado;
        cout << "el area del cuadrado es: " << lado * lado << endl;
        break;
    case 3:
        cout << "has seleccionado la opcion de triangulo/n";
        cout << "ingresa la base del triangulo: ";
        cin >> base;
        cout << "ingresa la altura del triangulo: ";
        cin >> altura;
        cout << "el area del triangulo es: " << 0.5 * base * altura << endl;
        break;

    default:
        cout << "opcion no valida." << endl;
        break;
    }
    return 0;
}