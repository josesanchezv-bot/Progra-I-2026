// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 20/04/2026
#include <iostream>
using namespace std;

void dividirCadena(const string &texto, char delimitador);

int main() {
    string texto = "Esto,es,una,cadena,separada,por,comas";
    char delimitador = ',';

    dividirCadena(texto, delimitador);

    return 0;
}

void dividirCadena(const string &texto, char delimitador) {
    string palabra = "";

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] != delimitador) {
            palabra += texto[i];
        } else {
            cout << palabra << endl;
            palabra = "";
        }
    }

    if (palabra.length() > 0) {
        cout << palabra << endl;
    }
}