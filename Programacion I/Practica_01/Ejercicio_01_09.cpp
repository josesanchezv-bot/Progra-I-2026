// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 18/02/2026
#include <iostream>
using namespace std;

string enteroARomano(int num) {
    string miles[]    = {"", "M", "MM", "MMM"};
    string centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string decenas[]  = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    return miles[num / 1000] +
           centenas[(num % 1000) / 100] +
           decenas[(num % 100) / 10] +
           unidades[num % 10];
}

int main() {
    int num;
    cout << "Ingrese un numero (1 - 3999): ";
    cin >> num;

    if ((num < 1)or (num > 3999)) {
        cout << "Numero fuera de rango." << endl;
    } else {
        cout << "Numero romano: " << enteroARomano(num) << endl;
    }

    return 0;
}
