// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 17/04/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

int main()
{
    system("cls");
    string correo="";
    bool valido1=false;
    bool valido2=false;
    cout << "ingresar dirección de correo electronico"<<endl;
    cout << "minimo debe contar con un @ y un punto"<<endl;
    getline(cin,correo);
    for (int i = 0; i < correo.length(); i++)
    {
        if (correo[i] == '@')
        {
            valido1=true;
        }
        if (correo[i] == '.')
        {
            valido2=true;
        }
    }
    if ((valido1=true)and(valido2=true))
        {
            cout << "correo valido: Bienvenido"<<endl;
        }
        else 
        {
            cout<<"correo invalido"<<endl;
        }
    return 0;   
}