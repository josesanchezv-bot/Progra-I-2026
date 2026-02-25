// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 25/02/2026
#include <iostream>
#include <cstdlib> //habia q poner esto para poder usar aleatoriedad
#include <ctime> //para poder usar tiempo

using namespace std;

int main() {
    int numeroSecreto, numeroUsuario, intentos = 0;
    srand(time(0)); //semilla
    numeroSecreto = rand() % 100 + 1;

    cout << "Piensa en un numero entre 1 y 100" << endl;

    do {
        cout << "Ingresa tu numero: ";
        cin >> numeroUsuario;
        intentos++;

        if (numeroUsuario > numeroSecreto) {
            cout << "El numero es MENOR" << endl;
        } 
        else if (numeroUsuario < numeroSecreto) {
            cout << "El numero es MAYOR" << endl;
        } 
        else {
            cout << "¡¡CORRECTO!!" << endl;
        }

    } while (numeroUsuario != numeroSecreto);

    cout << "Adivinaste en " << intentos << " intentos." << endl;

    return 0;
}