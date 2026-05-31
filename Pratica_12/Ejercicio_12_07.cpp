// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void calcularPromedios();

int main() {

    calcularPromedios();

    return 0;
}

void calcularPromedios() {

    ifstream entrada("calificaciones.txt");
    ofstream salida("promedios.txt");

    string linea;

    while(getline(entrada,linea)){

        stringstream ss(linea);

        string nombre;
        ss>>nombre;

        float nota;
        float suma=0;
        int cantidad=0;

        while(ss>>nota){

            suma+=nota;
            cantidad++;
        }

        salida<<nombre<<" "
              <<suma/cantidad<<endl;
    }

    entrada.close();
    salida.close();
}