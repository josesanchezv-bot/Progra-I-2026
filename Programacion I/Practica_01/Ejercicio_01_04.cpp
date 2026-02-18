// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 16/02/2026
#include <iostream>

using namespace std;

int main()
{
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float promedio = 0;
    cout << "insertar la primera nota del estudiante"<<endl;
    cin >> nota1;
    cout << "insertar la segunda nota del estudiante"<<endl;
    cin >> nota2;
    cout << "insertar la tarcera nota del estudiante"<<endl;
    cin >> nota3;
    promedio = (nota1+nota2+nota3)/3;
    cout << "el promedio del estudiante es de: " << promedio;
    if (promedio>51)
    {
        cout << " entonces aprueba";}
        else
    {
        cout << " y pos reprueba";
    }    
}