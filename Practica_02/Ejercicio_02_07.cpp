// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 25/02/2026
#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int num,divisores = 0;
    cout << "ingresar un numero para ver si es perfecto: ";
    cin >> num;
    for (size_t i = 0; i <= num; i++)
    {
       if (num%i==0)
       {
        divisores+=num;
       }
    }
    if (divisores==num)
       {
        cout << "se trata de un numero perfecto";
       }
    if (divisores!=num)
       {
        cout << "no se trata de un numero perfecto";
       }
    return 0;
}