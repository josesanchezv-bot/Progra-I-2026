// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 12/04/2026
// Número de ejercicio: 5
#include <iostream>
using namespace std;

// PROTOTIPOS
void combinar(int n);

int main(){
    system("cls");

    int n;
    cin>>n;

    combinar(n);

    return 0;
}

void combinar(int n){
    int a[n], b[n], c[2*n];

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    for(int i=0;i<n;i++) c[i]=a[i];
    for(int i=0;i<n;i++) c[n+i]=b[i];

    for(int i=0;i<2*n;i++)
        cout<<c[i]<<" ";
}