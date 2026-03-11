// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 07/03/2026
#include <iostream>
using namespace std;

float volumen_cilindro(float radio, float altura);

int main()
{
    system("cls");
    float radio=0;
    float altura=0;
    cout << "sistema de calculo del volumen de un cilindro"<<endl;
    cout << "ingresar el radio: "<<endl;
    cin >> radio;
    cout << "ingrsar la altura "<<endl;
    cin >> altura;
    cout << "el volumen calculado ocn los datos asignados es de: "<<volumen_cilindro( radio, altura);
    return 0;
}

float volumen_cilindro(float radio, float altura)
{
    float volumen =0;
    const float pi=3.1416926;
    volumen = radio* radio* altura * pi;
    return volumen;
}
 //(V=π * r * r * h)