// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 12/04/2026
// Número de ejercicio: 6
#include <iostream>
using namespace std;

// PROTOTIPOS
void suma();

int main(){
    system("cls");

    suma();

    return 0;
}

void suma(){
    int v1[5], v2[5], v3[5];

    for(int i=0;i<5;i++) cin>>v1[i];
    for(int i=0;i<5;i++) cin>>v2[i];

    for(int i=0;i<5;i++){
        v3[i]=v1[i]+v2[i];
        cout<<v3[i]<<" ";
    }
}