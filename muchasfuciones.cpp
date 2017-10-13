#include <iostream>
using namespace std;
void llenar_par(int v[], int tam);
void mostrar(int v[], int tam);
void mostrar_invertido(int v[], int tam);
void girar_arriba(int v[], int tam);
void invertir(int vec[], int t);
void mostrar_abajo(int vec[], int t);


int main ()
{
    int v[10];
    llenar_par(v, 10);
    mostrar(v, 10);
    mostrar_invertido(v, 10);
    girar_arriba(v, 10);
     mostrar(v, 10);
    invertir(v, 10);
     mostrar(v, 10);
    mostrar_abajo(v, 10);
     mostrar(v, 10);

}
void llenar_par(int v[], int tam)
{
    int l;
    l=2;
    for(int i=0; i<tam; i++)
    {
        v[i]=l;
        l+=2;

    }
}
void mostrar(int v[], int tam)
{
    for(int i=0; i<tam; i++ )
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;

}
void mostrar_invertido(int v[], int tam)
{
     for(int i=tam-1; i>=0; i--)
     {
         cout<<v[i]<<endl;
     }
     cout<<endl;
}
void girar_arriba(int v[], int tam)
{
    int l;
    l=v[0];

    for(int i=0; i<tam-1; i++)
        {
            v[i]=v[i+1];
        }
    v[tam-1]=l;
}
void invertir(int v[], int tam)
{
    int l;

    for(int i=0, k=tam-1; i<tam/2; i++, k--)
    {
        l=v[i];
        v[i]=v[k];
        v[k]=l;
    }

}
void mostrar_abajo(int v[], int tam)
{
    int l;
    l=v[tam-1];

    for(int i=tam-1; i>=0; i--)
        {
            v[i]=v[i-1];
        }

    v[0]=l;

}
