#include <iostream>
using namespace std;

main()
{
    int n, i;

    cout << "Ingrese su numero" << endl;
    cin >> n;

    for (int i = 2; i < n; i += 2)
    {
        cout << "nuemeros = " << i << endl;
    }

    return 0;
}