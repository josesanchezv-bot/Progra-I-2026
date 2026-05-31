// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Prototipos
void contarPalabras();

int main() {

    contarPalabras();

    return 0;
}

void contarPalabras() {

    ifstream archivo("texto.txt");

    string palabra;
    int contador = 0;

    while(archivo >> palabra) {
        contador++;
    }

    cout << "Cantidad de palabras: "
         << contador << endl;

    archivo.close();
}