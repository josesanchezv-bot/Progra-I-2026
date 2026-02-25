// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 24/02/2026
#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int num,sumat,sumapar,sumaimp,sumaprim, divs=0;
    bool primo = false;
    do
    {
        cout << "ingresar numero (0 para terminar proceso)";
        cin >> num;
        sumat += num;
        for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            divs++; // Contamos cuantas veces la division es exacta
        }
        if (divs==2)
        {
            primo=true;
        }
    }
        if (num%2==0)
        {
            sumapar += num;
        }
        if (num%2==1)
        {
            sumaimp += num;
        }
        if ((num%2==1)and(primo))
        {
            sumaprim += num;
        }
    } while ((num!=0)and(num<101));
    cout << "Suma todos los números ingresados: " << sumat << endl;
    cout << "Suma de todos los números pares: " << sumapar << endl;
    cout << "Suma de todos los números impares: " << sumaimp << endl;
    cout << "Suma de todos los números primos: " << sumaprim << endl;
    return 0;
}