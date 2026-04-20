// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 20/04/2026
#include <iostream>
using namespace std;

void generar();

int main(){
    system("cls");
    generar();
}

void generar(){
    int n=5, m[5][5];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            m[i][j]=2*i+j+1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
}