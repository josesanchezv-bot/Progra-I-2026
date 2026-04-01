// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 31/03/2026
// Número de ejercicio: 6
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos) {
    horas = totalSegundos / 3600;
    totalSegundos %= 3600;
    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}

int main() {
    int total, h, m, s;

    cout << "Ingrese segundos: ";
    cin >> total;

    calcularTiempo(total, h, m, s);

    cout << "Tiempo: " << h << "h " << m << "m " << s << "s" << endl;

    return 0;
}   