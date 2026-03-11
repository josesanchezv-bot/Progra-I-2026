// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 07/03/2026
#include <iostream>

using namespace std;

float calcular_area (float base, float altura);
int main ()
{
    system("cls");
    float base=0;
    float altura=0;
    cout << "sistema de calculo de areas"<<endl;
    cout << "ingresar la base " <<endl;
    cin >> base ;
    cout << "ingresar la altura " <<endl;
    cin >> altura ;
    cout << "el area calculada de los datos ingresados es: "<< calcular_area ( base, altura)<<endl;
    return 0;
}

float calcular_area (float base, float altura)
{
    float area=0;
    area = (base*altura)/2;
    return area;
}
