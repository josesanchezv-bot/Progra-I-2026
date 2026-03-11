// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026
#include <iostream>
using namespace std;

int salario_horas(int horas,int sueldo);
int bonificado(int horas,int sueldo);

int main()
{
    system("cls");
    int horas=0;
    int sueldo=0;
    cout << "ingresar horas de trabajo realizadas"<<endl;
    cin >>horas;
    cout << "ingresar tarifa a pagar respectiva por hora"<<endl;
    cin >>sueldo;
    cout << "su salario es de: " << salario_horas(horas,sueldo)<<endl;
    cout << "su salario bonificado es de: " << bonificado(horas,sueldo)<< endl;
    return 0 ;
}

int salario_horas(int horas,int sueldo)
{
    int bonif=sueldo*2;
    int salario=0;
    int salario_bonif=0;
    salario=sueldo*horas;
    return salario;
}
int bonificado(int horas,int sueldo)
 {
    int bonif=30;
    int salario_bonif=0;
    if (horas>8)
    {
        salario_bonif=(sueldo*horas)+((horas-8)*bonif);
    }
    else
    {
        salario_bonif=sueldo*horas;
    }
    return salario_bonif;
 }