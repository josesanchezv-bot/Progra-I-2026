// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
using namespace std;

int fibonacci(int n);

int main()
{
    int n;

    cout << "Ingrese n: ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fibonacci(n);

    return 0;
}

int fibonacci(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}