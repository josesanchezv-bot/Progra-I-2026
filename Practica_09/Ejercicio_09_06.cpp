// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 20/04/2026
#include <iostream>
using namespace std;

void transpuesta();

int main(){
    system("cls");
    transpuesta();
}

void transpuesta(){
    int f,c;
    cin>>f>>c;

    int m[100][100];

    for(int i=0;i<f;i++)
        for(int j=0;j<c;j++)
            cin>>m[i][j];

    for(int j=0;j<c;j++){
        for(int i=0;i<f;i++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
}