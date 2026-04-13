// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 12/04/2026
// Número de ejercicio: 2
#include <iostream>
using namespace std;

// PROTOTIPOS
void mostrar(double v[]);

int main(){
    system("cls");

    double voltios[9]={11.95,16.32,12.15,8.22,15.98,26.22,13.54,6.45,17.59};

    mostrar(voltios);

    return 0;
}

void mostrar(double v[]){
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<v[k++]<<" ";
        }
        cout<<endl;
    }
}