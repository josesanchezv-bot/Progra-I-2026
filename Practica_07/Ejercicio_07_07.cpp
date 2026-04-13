// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 12/04/2026
// Número de ejercicio: 7
#include <iostream>
using namespace std;

// PROTOTIPOS
void llenar();

int main(){
    system("cls");

    llenar();

    return 0;
}

void llenar(){
    int v[10], i=0, num;

    while(i<10){
        cin>>num;
        if(num<0) break;
        v[i++]=num;
    }

    for(int j=0;j<i;j++)
        cout<<v[j]<<" ";
}