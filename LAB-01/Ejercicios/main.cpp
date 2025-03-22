#include <iostream>

using namespace std;

void ejercicio1();

int main()
{
    ejercicio1();
    return 0;
}

void ejercicio1()
{
    int a;
    cout << "Ingrese un numero entero: " << endl;
    cin >> a;

    int b;
    cout << "Ingrese otro numero entero: " << endl;
    cin >> b;

    cout << "El residuo de la division " << a << "/" << b << " es: " << a % b << endl;
}
