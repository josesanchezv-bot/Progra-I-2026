// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
#include <fstream>
using namespace std;

void filtrarTemperaturas();

int main() {

    filtrarTemperaturas();

    return 0;
}

void filtrarTemperaturas() {

    ifstream entrada("temperaturas.txt");
    ofstream salida("altas_temperaturas.txt");

    string ciudad;
    float temperatura;
    float limite;

    cout<<"Temperatura limite: ";
    cin>>limite;

    while(entrada>>ciudad>>temperatura){

        if(temperatura>limite){

            salida<<ciudad<<" "
                  <<temperatura<<endl;
        }
    }

    entrada.close();
    salida.close();
}