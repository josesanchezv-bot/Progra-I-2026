// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 06/06/2026
#include <iostream>

using namespace std;

float calcularFinal(float t1, float t2, float t3, float t4, float ef);

int main()
{
    int n;

    cout << "Cantidad de alumnos: ";
    cin >> n;

    float notaFinal[n];

    float suma = 0;
    float minimo;
    float maximo;

    for (int i = 0; i < n; i++)
    {
        float t1;
        float t2;
        float t3;
        float t4;
        float ef;

        cout << "T1: ";
        cin >> t1;

        cout << "T2: ";
        cin >> t2;

        cout << "T3: ";
        cin >> t3;

        cout << "T4: ";
        cin >> t4;

        cout << "EF: ";
        cin >> ef;

        notaFinal[i] = calcularFinal(t1, t2, t3, t4, ef);

        suma += notaFinal[i];

        if (i == 0)
        {
            minimo = notaFinal[i];
            maximo = notaFinal[i];
        }
        else
        {
            if (notaFinal[i] < minimo)
            {
                minimo = notaFinal[i];
            }

            if (notaFinal[i] > maximo)
            {
                maximo = notaFinal[i];
            }
        }
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Nota final alumno " << i + 1 << ": ";
        cout << notaFinal[i] << endl;
    }

    cout << "Promedio: " << suma / n << endl;
    cout << "Minimo: " << minimo << endl;
    cout << "Maximo: " << maximo << endl;

    return 0;
}

float calcularFinal(float t1, float t2, float t3, float t4, float ef)
{
    float np;

    np = (t1 + t2 + t3 + t4) / 4;

    return 0.7 * np + 0.3 * ef;
}