// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 12/04/2026
// Número de ejercicio: 4
#include <iostream>
using namespace std;

// PROTOTIPOS
void multiplicar(int n);

int main(){
    system("cls");

    int n;
    cout<<"Dimension: ";
    cin>>n;

    multiplicar(n);

    return 0;
}

void multiplicar(int n){
    int a[n], b[n], c[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<n;i++){
        c[i]=a[i]*b[i];
        cout<<c[i]<<" ";
    }
}