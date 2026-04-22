// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica
// Fecha creación: 22/04/2026
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void limpia_bitacora(vector<string>
&registro, int &correcciones);

int main()
{
    system("cls");
    int correcciones=0;
    vector<string> registro={"Juan  Pabl#o","Jim #Servantes","Sa#n#s  Papyrus"};
    cout << "lista sin corregir;"<<endl;
    for (int i = 0; i < registro.size(); i++)
    {
        cout << registro[i] << endl;
    }
    limpia_bitacora(registro,correcciones);
    return 0;
}

void limpia_bitacora(vector<string> &registro, int &correcciones)
{
    cout << "lista corregida:" << endl;
    for (int i = 0; i < registro.size(); i++)
    {
        string corregido = "";
        for (int j = 0; j < registro[i].length(); j++)
        {
            if (j > 0 && registro[i][j] == registro[i][j-1] && registro[i][j] == ' ')
            {
                correcciones++;
            }
            else if (registro[i][j] == '#')
            {
                correcciones++;
            }
            else
            {
                corregido += registro[i][j];
            }
        }
        registro[i] = corregido;
        cout << registro[i] << endl;
    }
}