// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 20/04/2026
#include <iostream>
using namespace std;

string capitalizarTexto(string texto);
char convertirMayuscula(char c);

int main() {
    string texto = "esto es una cadena de prueba";

    cout << capitalizarTexto(texto) << endl;

    return 0;
}

string capitalizarTexto(string texto) {
    bool nuevaPalabra = true;

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == ' ') {
            nuevaPalabra = true;
        } else {
            if (nuevaPalabra) {
                texto[i] = convertirMayuscula(texto[i]);
                nuevaPalabra = false;
            }
        }
    }

    return texto;
}

char convertirMayuscula(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}