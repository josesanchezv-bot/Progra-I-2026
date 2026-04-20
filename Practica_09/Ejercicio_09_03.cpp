// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 19/04/2026
#include <iostream>
using namespace std;

const int F=3, C=4;

void mostrar(char m[F][C]);
void analizar(char m[F][C]);

int main(){
    system("cls");
    char m[F][C]={
        {'x','o','x','o'},
        {'o','o','o','o'},
        {'o','o','x','o'}
    };

    mostrar(m);
    analizar(m);

    
    int cont=0;
    for(int i=0;i<F;i++)
        if(m[i][0]=='x') cont++;

    if(cont>=2) cout<<"No es posible entrar\n";
    else cout<<"Es posible entrar\n";
}


void mostrar(char m[F][C]){
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
}

void analizar(char m[F][C]){
    int fs=0, cs=0;
    int f[100], c[100], k=0;

    for(int i=0;i<F;i++){
        bool ok=true;
        for(int j=0;j<C;j++){
            if(m[i][j]=='x'){
                ok=false;
                f[k]=i; c[k]=j; k++;
            }
        }
        if(ok) fs++;
    }

    for(int j=0;j<C;j++){
        bool ok=true;
        for(int i=0;i<F;i++)
            if(m[i][j]=='x') ok=false;
        if(ok) cs++;
    }

    cout<<"Filas seguras: "<<fs<<endl;
    cout<<"Columnas seguras: "<<cs<<endl;

    for(int i=0;i<k;i++)
        cout<<"("<<f[i]<<","<<c[i]<<")\n";

    cout<<"Total zombies: "<<k<<endl;
}