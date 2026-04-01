// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 31/03/2026
// Número de ejercicio: 3
#include <iostream>
using namespace std;

void ModificarValores(int valor, int &ref); 

int main() {
    int a = 5, b = 10;

    cout << "Antes: a=" << a << ", b=" << b << endl;

    ModificarValores(a, b);

    cout << "Despues: a=" << a << ", b=" << b << endl;

    return 0;
}


void ModificarValores(int valor, int &ref){
    valor = valor * 2;
    ref = ref + 10;

    cout << "Dentro de la funcion:" << endl;
    cout << "Valor por valor: " << valor << endl;
    cout << "Valor por referencia: " << ref << endl;
}