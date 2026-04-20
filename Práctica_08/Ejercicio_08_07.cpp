// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 19/04/2026
#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("cls");
    string oracion;
    cout << "Ingresa una oracion: ";
    getline(cin, oracion);
    for (int i = 0; i < oracion.length(); i++)
    {
        if ((oracion[i]=='1')or(oracion[i]=='2')or(oracion[i]=='3')or(oracion[i]=='4')or(oracion[i]=='5'))
        {
            oracion[i]=' ';
        }
        if ((oracion[i]=='6')or(oracion[i]=='7')or(oracion[i]=='8')or(oracion[i]=='9')or(oracion[i]=='0'))
        {
            oracion[i]=' ';
        }
    }
    cout<< "oracion sin digitos: "<< oracion<<endl;
    return 0;
}