// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 03/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main ()
{
    system("cls");
    srand(time(0));
    int veces=0;
    int num =0;
    double sum=0;
    double prom=0;
    double mayor=0;
    double menor=1000;
    cout << "ingresar cantidad de veces que se generara un numero entre 1 y 1000"<<endl;
    cin >> veces;
    for (int i = 0; i < veces; i++)
    {
        num = rand()%1000+1;
        cout << num << endl;
        sum += num;
        if (num>mayor)
        {
            mayor = num;
        }
        if (num<menor)
        {
            menor = num;
        }
    }
    prom = sum/veces;
    cout << "sumatoria" << sum <<endl;
    cout << "promedio" << prom <<endl;
    cout << "numero mayor" << mayor <<endl;
    cout << "numero menor" << menor <<endl;
}