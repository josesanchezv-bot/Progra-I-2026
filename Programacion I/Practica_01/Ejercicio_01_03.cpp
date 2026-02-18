// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 13/02/2026
#include <iostream>

using namespace std;

int main()
{
    int edad= 0;
    string sexo= " ";
    float altura= 0;
    cout << "datos personales "<<endl;
    cout << "Por favor ingresar sus anos de edad ";
    cin >> edad;
    cout << "Por favor ingresar sus sexo ";
    cin >> sexo;
    cout << "Por favor ingresar su altura estimada en metros ";
    cin >> altura;
    cout << "DATOS RECOPILADOS: "<<endl;
    cout << "Edad: " << edad << " sexo: " << sexo << " Altura: " << altura;
}