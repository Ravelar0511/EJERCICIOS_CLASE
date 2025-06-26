#include <iostream>
using namespace std;

main()
{
    int n, i, primo = 1;
    float modulo;

    cout << "Ingrese su numero" << endl;
    cin >> n;

    for (int i = n - 1; i >= 2; i -= 1)
    {
        modulo = n % i;

        if (modulo == 0)
        {
            cout << "no es primo" << endl;
            primo = 0;
            break;
        }
    }
     if (primo == 1)
        {
            cout << "es primo" << endl;
        }

    return 0;
}