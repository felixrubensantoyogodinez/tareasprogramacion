#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void numeros(int numero, int adivina);

int main()
{
    int numero, adivina;

    numeros(numero, adivina);

}
void numeros(int numero, int adivina )
{

    srand(time(NULL));
    numero=1+rand()%1000;
    int contador=0, suma=0;

    do
    {
    cout<<"Adivina el numero "<<endl;
    cin>>adivina;
    contador++;

    if(adivina<numero)
    {
        cout<<"el numero es mayor"<<endl;

    }
    else
        if(adivina>numero)
    {
        cout <<"el numero es menor"<<endl;


    }
    else
        cout<<"CORRECTO EL NUMERO ES "<<numero<<endl;



    }while(adivina!=numero);
    suma+=contador;
    cout<<"veces que se preguntaron "<<suma;
}

