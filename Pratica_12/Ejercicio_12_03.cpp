// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
#include <fstream>
using namespace std;

void registrarEstudiantes();

int main() {

    registrarEstudiantes();

    return 0;
}

void registrarEstudiantes() {

    ofstream salida("estudiantes.txt");

    int n,edad;
    string nombre;
    float promedio;

    cout<<"Cantidad: ";
    cin>>n;

    for(int i=0;i<n;i++){

        cout<<"Nombre: ";
        cin>>nombre;

        cout<<"Edad: ";
        cin>>edad;

        cout<<"Promedio: ";
        cin>>promedio;

        salida<<nombre<<" "
              <<edad<<" "
              <<promedio<<endl;
    }

    salida.close();

    ifstream entrada("estudiantes.txt");

    while(entrada>>nombre>>edad>>promedio){

        cout<<nombre<<" "
            <<edad<<" "
            <<promedio<<endl;
    }

    entrada.close();
}