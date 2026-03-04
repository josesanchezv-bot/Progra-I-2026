// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 03/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    system("cls");
    srand(time(0));
    int veces= 0;
    int moneda= 0;
    double cara= 0;
    double proba1= 0;
    double cruz = 0;
    double proba2 = 0;
    cout << "ingresar contidad de lanzamientos"<<endl;
    cin >> veces;
    for (int i = 1; i <= veces; i++)
    {
        moneda = rand()%2+1;
        cout << moneda << endl;
        if (moneda%2==1)
        {
            cara ++;
        }
        if (moneda%2==0)
        {
            cruz ++;
        }
    }
    proba1 = (cara/veces)*100;
    proba2 = (cruz/veces)*100;
    cout << "un porcentaje de cara del "<< proba1 << " %" << endl;
    cout << "un porcentaje de cruz del "<< proba2 << " %" << endl;
}