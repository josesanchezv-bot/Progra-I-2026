// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 24/02/2026
#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int num, sumat = 0, sumapar = 0, sumaimp = 0, sumaprim = 0;
    do
    {
        int divs = 0;
        bool primo = false;

        cout << "ingresar numero (0 para terminar proceso): ";
        cin >> num;

        if (num == 0)
            break;

        if (num < 0 || num > 100)
        {
            cout << "Numero fuera de rango (0 - 100)" << endl;
            continue;
        }

        sumat += num;

        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                divs++;
            }
        }
        if (divs == 2)
        {
            sumaprim +=num;
        }

        if (num % 2 == 0)
        {
            sumapar += num;
        }
        else
        {
            sumaimp += num;
        }
    } while (num != 0);

    cout << "Suma todos los numeros ingresados: " << sumat << endl;
    cout << "Suma de todos los numeros pares: " << sumapar << endl;
    cout << "Suma de todos los numeros impares: " << sumaimp << endl;
    cout << "Suma de todos los numeros primos: " << sumaprim << endl;

    return 0;

}