// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 12/02/2026
#include <iostream>

using namespace std;

int main()
{
    system ("cls");
    int numero1 = 0;// inicialización de variables
    int numero2 = 0;
    int suma = 0;
    int resta = 0;
    int multi = 0;
    float divis = 0;
    cout << "Programa de operaciones basicas" << endl;
    cout << "ingresar el primer numero a operar ";
    cin >> numero1;
    cout << "ingresar el segundo numero a operar ";
    cin >> numero2;
    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multi = numero1 * numero2;
    divis = numero1 / numero2;
    cout << "la suma correspondiente es: " << suma << endl;
    cout << "la resta correspondiente es: " << resta << endl;
    cout << "la multiplicacion correspondiente es: " << multi << endl;
    cout << "la division correspondiente es: " << divis << endl;
    return 0;
}