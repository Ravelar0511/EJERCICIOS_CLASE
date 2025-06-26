#include <iostream>
using namespace std;

main()
{
int numero1;
    while (numero1 >= 0)
    {
           int arreglo [2];
        // pedir numero
        for (int i = 0; i < 2; i++)
        {
            cout << "ingrese un numero" << i + 1 << endl;
            cin >> arreglo[i];
        }
        // mostrar numeros en orden
        for (int i = 0; i < 2; i++)
        {
            cout << "Sus numeros son: " << arreglo[i] << endl;
        }
        numero1 = -1;
    }
    return 0;
}