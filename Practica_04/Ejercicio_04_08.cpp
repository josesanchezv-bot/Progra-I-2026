// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 09/03/2026
#include <iostream>
using namespace std;

int contador_digitos(int num);

int main()
{
    system("cls");
    int num=-1;
    cout <<"sistema de conteo de dígitos"<<endl;
    do
    {
        cout << "ingresar un número entero positivo"<<endl;
        cin >> num;
    } while (num<0);
    cout <<"el numero de digitos es de "<<contador_digitos(num);
    return 0;
}
int contador_digitos(int num)
{
    int digitos=0;
    do
    {
        num /=10;
        digitos++;
    } while (num > 0);
   return digitos;
}