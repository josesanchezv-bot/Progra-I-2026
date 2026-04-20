// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 19/04/2026
#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("cls");
    string oracion;
    cout << "Ingresa una oracion: ";
    getline(cin, oracion);

    vector<string> palabras;
    string palabra = "";
    for (int i = 0; i < oracion.length(); i++) {
        if (oracion[i] != ' ') {
            palabra += oracion[i]; 
        } else {
            if (palabra != "") {   
                palabras.push_back(palabra);
                palabra = "";
            }
        }
    }
    if (palabra != "") {
        palabras.push_back(palabra);
    }

    cout << "Oracion invertida: ";
    for (int i = palabras.size() - 1; i >= 0; i--) {
        cout << palabras[i];
        if (i != 0) cout << " ";
    }
    return 0;
}