// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 16/04/2026
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    system("cls");
    vector<string> lista_A ={"Hugo","Gerardo","Solis","Aquiles","Jimmy","Jose"};
    vector<string> lista_B ={"Hugo","Jimmy","Caine","Abril","Ginara","Jose"};
    vector<string> comun = {};
    int numero=0;
    for (int i = 0; i < lista_A.size(); i++)
    {
        for (int j = 0; j < lista_B.size(); j++)
        {
            if (lista_A[i]==lista_B[j])
            {
                comun.push_back(lista_A[i]);
                numero ++;
            }
            
        }
        
    }
    cout <<"clientes en comun: "<<numero<<endl;
    for (int i = 0; i < comun.size(); i++)
    {
        cout<< comun[i] <<endl;
    }
    return 0;
}