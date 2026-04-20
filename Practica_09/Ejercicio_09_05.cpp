// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 20/04/2026
#include <iostream>
using namespace std;

void multiplicar();

int main(){
    system("cls");
    multiplicar();
}

void multiplicar(){
    int n,m;
    cin>>n>>m;

    int A[100][100], B[100][100], C[100][100];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>A[i][j];

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>B[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            C[i][j]=0;
            for(int k=0;k<m;k++)
                C[i][j]+=A[i][k]*B[k][j];
        }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<C[i][j]<<" ";
        cout<<endl;
    }
}