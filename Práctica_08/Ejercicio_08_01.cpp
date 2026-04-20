// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 16/04/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int generar_aleatorio();

int main()
{
    system("cls");
    srand(time(0));
    vector<string> nombres= {"Canela","Santiago","Jimmy","Javier","Kick","Dave","Jorge","Rodrigo","Camila","Tessa"};
    vector<string> apellidos= {"Solis","Salgueiro","Sanchez","Soria","Bautista","Roca","Choque","Delgado","Delgadillo","Lara"};
    vector<string> edad= {"18","15","19","21","26","23","31","46","35","65"};
    int n=0;
    cout <<"ingresar cantidad de personas"<<endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
       cout<< nombres[generar_aleatorio()]+" "+apellidos[generar_aleatorio()]<<endl;
       cout<<" Edad:"<< edad[generar_aleatorio()]<<" anios"<<endl;
    }
    return 0;
}   
int generar_aleatorio()
{
    int random=0;
    random=rand()%10;
    return random;
}