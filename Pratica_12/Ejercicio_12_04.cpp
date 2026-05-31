// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void buscarTexto();

int main() {

    buscarTexto();

    return 0;
}

void buscarTexto() {

    ifstream archivo("datos.txt");

    string buscar,linea;
    int contador=0;

    cout<<"Buscar: ";
    getline(cin,buscar);

    while(getline(archivo,linea)){

        size_t pos=linea.find(buscar);

        while(pos!=string::npos){

            contador++;

            pos=linea.find(buscar,pos+1);
        }
    }

    cout<<"Apariciones: "<<contador;

    archivo.close();
}