// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 01/03/2026
#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main ()
{
    system("cls");
    int n=0;
    int dado=0;
    int sumapar =0;
    srand(time(0));
    cout << "ingrear el numero de lanzamiento de dados"<<endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        dado= 1+(rand()%(6-1+1));
        cout << dado<<endl;
        if  (dado%2==0)
        {
            sumapar += dado;
        }
    }
    cout << "suma de resultados pares del dado: "<< sumapar;
}