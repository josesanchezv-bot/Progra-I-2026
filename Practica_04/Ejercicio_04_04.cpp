// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 08/03/2026
#include <iostream>

using namespace std;

float cambio_oficial (float monto);
float cambio_paralelo (float monto);

int main()
{
    system("cls");
    float monto=0;
    cout << "ingresar el monto respectivo a cambiar a dolares"<<endl;
    cin >> monto;
    cout << "el valor cambiado por cambio oficial resulta en " << cambio_oficial (monto) <<" dolares"<<endl;
    cout << "el valor cambiado por cambio paralelo resulta en " << cambio_paralelo (monto) <<" dolares"<<endl;
}

float cambio_oficial (float monto)
{
    float cambio_ofi=0;
    cambio_ofi= monto*6.99;
    return cambio_ofi;
}
float cambio_paralelo (float monto)
{
    float cambio_par=0;
    cambio_par= monto*13;
    return cambio_par;
}