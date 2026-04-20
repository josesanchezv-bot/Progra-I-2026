// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 20/04/2026
#include <iostream>
using namespace std;

bool esPalindromo(string texto);
string limpiarTexto(string texto);
char convertirMinuscula(char c);

int main() {
    system("cls");
    string texto = "Ana lleva al oso la avellana";

    if (esPalindromo(texto)) {
        cout << "Es palindromo" << endl;
    } else {
        cout << "No es palindromo" << endl;
    }

    return 0;
}

bool esPalindromo(string texto) {
    texto = limpiarTexto(texto);

    int inicio = 0;
    int fin = texto.length() - 1;

    while (inicio < fin) {
        if (texto[inicio] != texto[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }

    return true;
}

string limpiarTexto(string texto) {
    string limpio = "";

    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            limpio += convertirMinuscula(c);
        }
    }

    return limpio;
}

char convertirMinuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}