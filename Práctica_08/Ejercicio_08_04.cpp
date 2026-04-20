// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 17/04/2026
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

    int n = 0;
    vector<int> escala{};
    vector<int> pixeles(26, 0);

    cout << "cantidad de valores en la escala" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        escala.push_back(generar_aleatorio(255, 0));

        for (int j = 0; j < 26; j++)
        {
            int inicio = j * 10;
            int fin = inicio + 9;

            if (escala[i] >= inicio && escala[i] <= fin)
            {
                pixeles[j]++;
            }
        }
    }

    cout << "Escala de pixeles por rangos de 10:" << endl;

    for (int j = 0; j < pixeles.size(); j++)
    {
        int inicio = j * 10;
        int fin = (j == 25) ? 255 : inicio + 9;

        cout << inicio << "-" << fin << ": "
             << pixeles[j] << " pixeles" << endl;
    }

    return 0;
}

int generar_aleatorio(int superior, int inferior)
{
    return rand() % (superior - inferior + 1) + inferior;
}