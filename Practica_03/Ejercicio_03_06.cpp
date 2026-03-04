// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 04/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    system("cls");
    srand(time(0));
    int cantidad=0;
    int niño = 0;
    int pañales = 0;
    cout << "ingresar numero de niños"<<endl;
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        niño = rand()%3+1;
        cout << "un nino de: " << niño << " anios"<<endl;
        if (niño==1)
        {
            pañales += 6;
        }
        if (niño==2)
        {
           pañales += 3;
        }
        if (niño==3)
        {
            pañales += 2;
        }
    }
    cout << "cantidad de pañales necesitada es de: "<< pañales << endl;
}