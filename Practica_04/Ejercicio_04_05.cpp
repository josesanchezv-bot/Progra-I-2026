// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 08/03/2026
#include <iostream> 

using namespace std;

bool paridad(int num);

int main()
{
    system("cls");
    int num=0;
    cout << "ingresar numero para verificar paridad"<<endl;
    cin >>num;
    cout << paridad(num);
    return 0 ;
}

bool paridad (int num)
{
    bool par=false;
    if (num%2==0)
    {
        par=true;
        cout << "es par ";
    }
    else
    {
        par=false;
        cout << "no es par  ";
    }
    return par;
}