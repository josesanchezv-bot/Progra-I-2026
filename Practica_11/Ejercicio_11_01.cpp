// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 26/05/2026
#include <iostream>
#include <string>
using namespace std;


int suma_digitos(int num);

int main()
{
    system("cls");
    int num =0;
    cout << "ingresar numero para sumar sus digitos"<<endl;
    cin >> num;
    cout<<suma_digitos(num);
    return 0;
}


int suma_digitos(int num)
{
    if (num==0)
    {
        return 0;
    }
    else
    {
        return (num%10)+ suma_digitos(num/10);
    }
}