
// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void contar();

int main() {

    contar();

    return 0;
}

void contar() {

    ifstream archivo("documento.txt");

    string linea,palabra;

    int lineas=0;
    int palabras=0;
    int caracteres=0;

    while(getline(archivo,linea)){

        lineas++;

        caracteres+=linea.length();

        for(int i=0;i<linea.length();i++){

            if(i==0 && linea[i]!=' ')
                palabras++;

            else if(linea[i]!=' ' && linea[i-1]==' ')
                palabras++;
        }
    }

    cout<<"Lineas: "<<lineas<<endl;
    cout<<"Palabras: "<<palabras<<endl;
    cout<<"Caracteres: "<<caracteres<<endl;

    archivo.close();
}