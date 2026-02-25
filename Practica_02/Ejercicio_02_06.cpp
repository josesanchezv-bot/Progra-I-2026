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
    int num1, num2 = 0;
    cout << "ingresar primer numero" << endl;
    cin >> num1;
    cout << "ingresar segundo numero" << endl;
    cin >> num2;
    if (num1>num2)
    {
        for (size_t i = 0; i < num1; i++)
        {
            cout<< i;
        } 
    }
    if (num1<num2)
    {
        for (size_t i = num2; i >= 1; i--)
        {
            cout << i;
        }   
    }
    if (num1==num2)
    {
        cout << "ambos numeros iguales, sin forma de proceder";
    }
    return 0;
}