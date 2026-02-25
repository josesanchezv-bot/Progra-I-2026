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
    for (int i = 1; i < num; i++)
    {
       if (num % i==0) //busqueda de divisores por medio del for
       {
        divisores+=i; //la suma de sus divisores exactos
       }
    }
    cout << "prosceso realizado"<<endl; //asegurarse que funciona
    //antes esto no aparecia ni nada por lo que usar esto me aseguraba que estaba bien o mal
    if (divisores==num)
       {
        cout << "se trata de un numero perfecto";
       }
    else
       {
        cout << "no se trata de un numero perfecto";
       }
    return 0;
}