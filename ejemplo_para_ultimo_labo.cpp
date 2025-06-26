#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Estudiante
{
    int id;
    string nombre;
    int edad;
};

Estudiante estudiantes[10];
int total = 0;
void agregar()
{
    cout << "ID: ";
    cin >> estudiantes[total].id;
    cout << "Nombre: ";
    cin >> estudiantes[total].nombre;
    cout << "Edad: ";
    cin >> estudiantes[total].edad;
    total++;
    cout << "Agregado!\n";
}

void mostrar()
{
    cout << "\n--- ESTUDIANTES ---\n";
    for (int i = 0; i < total; i++)
    {
        cout << estudiantes[i].id << " - "
             << estudiantes[i].nombre << " - "
             << estudiantes[i].edad << " años\n";
    }
}

void buscar()
{
    int buscarId;
    bool Encontrado = false;
    cout << "Ingrese el ID que desea buscar: ";
    cin >> buscarId;
    ofstream archivo("estudiantes.txt");
    if (archivo.is_open())
    {
        for (int i = 0; i < total; i++)
        {

            if (buscarId == estudiantes[i].id)
            {
                cout << "Estudiante encontrado:\n ";
                cout << estudiantes[i].id << " - "
                     << estudiantes[i].nombre << " - "
                     << estudiantes[i].edad << " - ";
                Encontrado = true;
                break;
            }
        }
    }
    if (!Encontrado)
    {
        cout << "Estudiante no encontrado\n";
    }
    else
    {
        cout << "A ocurrido un error\n";
    }
    archivo.close();
    // 1. Recorre el array con for
    // 2. Compara estudiantes[i].id con buscarId
    // 3. Si coincide, muestra los datos
    // 4. Si no encuentra nada, di "No encontrado"
}

void guardar()
{
    ofstream archivo("estudiantes.txt");
    archivo << total << endl;
    for (int i = 0; i < total; i++)
    {
        archivo << estudiantes[i].id << " "
                << estudiantes[i].nombre << " "
                << estudiantes[i].edad << endl;
    }
    archivo.close();
}

void cargar()
{
    ifstream archivo("estudiantes.txt");
    if (archivo.is_open())
    {
        archivo >> total;
        for (int i = 0; i < total; i++)
        {
            archivo >> estudiantes[i].id >> estudiantes[i].nombre >> estudiantes[i].edad;
        }
        archivo.close();
    }
}

int main()
{
    cargar();
    int op;
    do
    {
        cout << "\n1.Agregar\n2.Mostrar\n3.Buscar\n4.Salir\n";
        cin >> op;
        if (op == 1)
            agregar();
        else if (op == 2)
            mostrar();
        else if (op == 3)
            buscar();
        else if (op == 4)
        {
            guardar();
            break;
        }
    } while (true);
    return 0;
}
