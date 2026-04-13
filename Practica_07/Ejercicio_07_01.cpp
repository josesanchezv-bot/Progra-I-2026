// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 12/04/2026
// Número de ejercicio: 1
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// PROTOTIPOS
void voltajes(double v[]);
void temperaturas(double t[]);
void caracteres(char c[]);
void anios(int a[]);
void velocidades(double vel[]);
void distancias(double d[]);

int main() {
    system("cls");
    srand(time(0));

    double v[100], t[50], vel[32], d[1000];
    char c[30];
    int a[100];

    voltajes(v);
    temperaturas(t);
    caracteres(c);
    anios(a);
    velocidades(vel);
    distancias(d);

    cout << "Datos generados correctamente.\n";
    return 0;
}

// FUNCIONES
void voltajes(double v[]){
    for(int i=0;i<100;i++)
        v[i]=20.0 + (rand()%20001)/100.0;
}

void temperaturas(double t[]){
    for(int i=0;i<50;i++)
        t[i]=(rand()%10001)/100.0;
}

void caracteres(char c[]){
    for(int i=0;i<30;i++)
        c[i]='A'+rand()%26;
}

void anios(int a[]){
    for(int i=0;i<100;i++)
        a[i]=1990+rand()%36;
}

void velocidades(double vel[]){
    for(int i=0;i<32;i++)
        vel[i]=10.0+(rand()%29001)/100.0;
}

void distancias(double d[]){
    for(int i=0;i<1000;i++)
        d[i]=1.0+(rand()%99901)/100.0;
}