// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 18/04/2026
#include <iostream>
using namespace std;

void intercambiar(int m[100][100], int n);

int main(){
    system("cls");
    int n, m[100][100];

    cin >> n;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> m[i][j];

    intercambiar(m,n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
}

void intercambiar(int m[100][100], int n){
    for(int j=0;j<n;j++){
        int aux = m[0][j];
        m[0][j] = m[n-1][j];
        m[n-1][j] = aux;
    }
}