// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 12/04/2026
// Número de ejercicio: 3
#include <iostream>
using namespace std;

// PROTOTIPOS
void procesar(int n);

int main(){
    system("cls");

    int n;
    cout<<"Cantidad de datos: ";
    cin>>n;

    procesar(n);

    return 0;
}

void procesar(int n){
    double cal[n], des[n], suma=0;

    for(int i=0;i<n;i++){
        cout<<"Calificacion "<<i+1<<": ";
        cin>>cal[i];
        suma+=cal[i];
    }

    double prom=suma/n;

    cout<<"\nPromedio: "<<prom<<endl;

    double var=0;
    for(int i=0;i<n;i++){
        des[i]=cal[i]-prom;
        cout<<cal[i]<<" -> "<<des[i]<<endl;
        var+=des[i]*des[i];
    }

    var/=n;
    cout<<"Varianza: "<<var;
}