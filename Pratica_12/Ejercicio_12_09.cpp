// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
#include <fstream>
using namespace std;

void cifrarArchivo();

int main() {

    cifrarArchivo();

    return 0;
}

void cifrarArchivo() {

    ifstream entrada("mensaje.txt");
    ofstream salida("mensaje_cifrado.txt");

    char c;

    while(entrada.get(c)){

        if(c>='A' && c<='Z')
            c=((c-'A'+3)%26)+'A';

        else if(c>='a' && c<='z')
            c=((c-'a'+3)%26)+'a';

        salida.put(c);
    }

    entrada.close();
    salida.close();

    cout<<"Archivo cifrado";
}