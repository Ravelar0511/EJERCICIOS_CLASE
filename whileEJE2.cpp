#include <iostream>

using namespace std;

int main()
{

    int numero= 0, suma=0, posicion = 0;

    int sumatoria[25] = {0};

    cout << "Imgrese un numero entero" << endl;
    cin >> sumatoria[posicion];

    while(sumatoria[posicion] >= 0){

        posicion ++;

        cout << "ingrese otro numero"<< endl;
        cin >> sumatoria[posicion];
        
    }

    for(int i=0; i<25; i++){
                suma = suma + sumatoria[i];
    }

    cout << "la suma total es " << suma << endl;
        return 0;
}
