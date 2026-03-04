// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 04/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    system("cls");
    srand(time(0));
    int veces=0;
    int num=0;
    int primos=0;
    int divs=0;
    cout << "ingresar candidad de veces que se genere numero aleatorio entre 1 y 10000"<<endl;
    cin >> veces;
    for(int i = 0; i < veces; i++)
    {
        num = rand()%10000+1;
        cout << num <<endl;
        divs=0;
        for (int j = 1; j <= num; j++)
            {
            if (num%j == 0)
            {divs++;}
            }
        if (divs == 2)
        {
        primos ++;
        }
    }
    cout << "hay un total de "<< primos << " numeros primos" << endl;
}