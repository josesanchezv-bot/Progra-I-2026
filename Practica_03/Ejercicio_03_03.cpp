// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 03/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    system("cls");
    srand(time(0));
    int num =0;
    int factorial=1;
    num= rand()%10+1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    cout << "el numero aleatorio generado es: " << num << endl;
    cout << "cuyo factorial es: "<< factorial <<endl;
}