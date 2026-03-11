// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 09/03/2026
#include <iostream>
using namespace std;

float MRU(float velocidad, float tiempo);

int main()
{
    system("cls");
    float velocidad=0;
    float tiempo=0;
    cout << "ingresar velocidad constante (m/s)"<<endl;
    cin >> velocidad;
    cout << "ingresar tiempo de trayecto (segundos)"<<endl;
    cin >> tiempo;
    cout << "el objeto recorre una distancia de: "<< MRU(velocidad,tiempo) <<" metros";
    return 0;
}

float MRU(float velocidad, float tiempo)
{
    float distancia=0;
    distancia = velocidad*tiempo;
    return distancia;
}