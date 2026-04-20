// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 18/04/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// PROTOTIPO
void procesar(int m[100][100], int n, int A, int B);

int main(){
    system("cls");
    int n,A,B,m[100][100];
    srand(time(0));
    cout<< "ingresar magnitud de matriz n*n, A y B"<<endl;
    cin>>n>>A>>B;

    procesar(m,n,A,B);
}


void procesar(int m[100][100], int n, int A, int B){
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            m[i][j]=A+rand()%(B-A+1);

    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }

    int suma=0, prod=1, mayor=m[0][0], f=0,c=0;
    double total=0;

    for(int i=0;i<n;i++){
        suma+=m[i][n-1];
        for(int j=0;j<n;j++){
            total+=m[i][j];
            if(m[i][j]>mayor){
                mayor=m[i][j]; f=i; c=j;
            }
        }
    }

    for(int j=0;j<n;j++)
        prod*=m[n-1][j];

    double media = total/(n*n);
    double var=0;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            var+=pow(m[i][j]-media,2);

    cout<<"Suma col: "<<suma<<endl;
    cout<<"Producto fila: "<<prod<<endl;
    cout<<"Mayor: "<<mayor<<" ("<<f<<","<<c<<")\n";
    cout<<"Desviacion: "<<sqrt(var/(n*n));
}