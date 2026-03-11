// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026
#include <iostream>
using namespace std;

float promedio_nota(float velocidad, float tiempo);

int main()
{
    system("cls");
    float nota1=-1;
    float nota2=-1;
    do
    {
        cout << "ingresar primera nota"<<endl;
        cin >> nota1;
        cout << "ingresar segunda nota"<<endl;
        cin >> nota2;
    } while ((nota1<0)or(nota2<0));
    cout << "el promedio de las notas es de: "<< promedio_nota(nota1,nota2);
    return 0;
}
float promedio_nota(float nota1, float nota2)
{
    float promedio=0;
    promedio = (nota1+nota2)/2;
    return promedio;
}   