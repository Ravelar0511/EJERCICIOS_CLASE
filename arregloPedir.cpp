#include <iostream>
using namespace std;

main()
{

    float notas2[5];

    // pedir notas
    for (int  i = 0; i < 5; i++)
    {
        cout << "ingrese su nota " << i+1<< endl;
        cin >> notas2[i];
    }
// mostrar notas en orden
    for (int  i = 0; i < 5; i++)
    {
        cout << "Sus notas son: "<< notas2[i] << endl;
    }
// mostrar notas al revez 
      for (int  i = 4; i >= 0; i--)
    {
        cout << "Sus notas alrevez son: "<< notas2[i] << endl;
    }


    return 0;
}