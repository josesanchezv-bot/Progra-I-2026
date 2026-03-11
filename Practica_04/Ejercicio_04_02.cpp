// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 07/03/2026
#include <iostream>

using namespace std;

int determinar_mayor(int num1,int num2,int num3);

int main() 
{
    system("cls");
    int num1=0;
    int num2=0;
    int num3=0;
    cout << "sistema de determinacion de mayor numero entre tres variables"<<endl;
    cout << "ingresar el primer numero"<<endl;
    cin >> num1;
    cout << "ingresar el segundo numero"<<endl;
    cin >> num2;
    cout << "ingresar el tercer numero"<<endl;
    cin >> num3;
    cout << "el numero mayor entre los 3 es: " << determinar_mayor( num1, num2, num3);
    return 0;
}

int determinar_mayor(int num1,int num2,int num3)
{
    int mayor =0;
    if ((num1>num2)and(num1>num3))
    {
        mayor=num1;
    }
    if ((num2>num1)and(num2>num3))
    {
        mayor=num2;
    }
    if ((num3>num2)and(num3>num1))
    {
        mayor=num3;
    }
    else
    {
        cout<<"ERROR: no hay un solo mayor";
    }
    return mayor;
}