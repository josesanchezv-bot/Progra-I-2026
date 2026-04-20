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

int generar_aleatorio(int superior, int inferior);

int main()
{
    system("cls");
    srand(time(0));
    double n=0;
    vector<int> notas= {};
    double reprobado= 0;
    double regular=0;
    double bueno=0;
    double excelente=0;
    double porcentaje1=0;
    double porcentaje2=0;
    double porcentaje3=0;
    double porcentaje4=0;
    cout << "ingresar la cantidad de notas:"<<endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        notas.push_back(generar_aleatorio(100,0));
        cout<< notas[i]<<endl;
    }
        for (int j = 0; j < n; j++)
        {
        if (notas[j]<60)
        {
            reprobado++;
        }
        if ((notas[j]>=60)and(notas[j]<80))
        {
            regular++;
        }
        if ((notas[j]>=80)and(notas[j]<90))
        {
            bueno++;
        }
        if ((notas[j]>=90)and(notas[j]<=100))
        {
            excelente++;
        }
        }
    porcentaje1= (reprobado/n)*100;
    porcentaje2= (regular/n)*100;
    porcentaje3= (bueno/n)*100;
    porcentaje4= (excelente/n)*100;
    cout<< "reprobados: "<<porcentaje1<<"%"<<endl;
    cout<< "regulares: "<<porcentaje2<<"%"<<endl;
    cout<< "buenos: "<<porcentaje3<<"%"<<endl;
    cout<< "excelentes: "<<porcentaje4<<"%"<<endl;
    return 0;
}

int generar_aleatorio(int superior, int inferior)
{
    int random= 0;
    random=(rand()%superior-inferior+1)+inferior;
    return random;
}