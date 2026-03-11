// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 08/03/2026
#include <iostream>
using namespace std;

int sumatoria_naturales(int num);

int main()
{
    system("cls");
    int num=0;
    cout << "ingresar un numero para realizar su sumatoria"<<endl;
    cin >> num;
    cout << "la sumatoria del numero es: " << sumatoria_naturales(num);
    return 0;
}

int sumatoria_naturales(int num)
{
    int sumatoria=0;
    for (int i = 0; i <= num; i++)
    {
        sumatoria +=i;
    }
    return sumatoria;
}