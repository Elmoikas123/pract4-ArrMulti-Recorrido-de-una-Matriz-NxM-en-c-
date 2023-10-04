// pract4 ArrMulti Recorrido de una Matriz NxM en c++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <cstdlib>
#include <iostream>
#define maxf 3
#define maxc 5
using namespace std;

int main()
{
    float a[maxf][maxc];
    int f, c;

    // Leer el array
    for (f = 0; f < maxf; f++)
    {
        for (c = 0; c < maxc; c++)
        {
            cin >> a[f][c];
        }
    }

    // Escribir el array
    for (f = 0; f < maxf; f++)
    {
        for (c = 0; c < maxc; c++)
        {
            cout << a[f][c] << " ";
        }
        cout << endl;
    }

    // Pausa para visualizar los resultados
    cin.get(); // Esperar a que el usuario presione una tecla

    return EXIT_SUCCESS;
}