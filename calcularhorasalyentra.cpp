#include <iostream>
using namespace std;

int main ()
{
    int horas1, horas2;
    float minutos1, segundos1, minutos2, segundos2, entrada, salida, agregado;

    cout<<"Hora entrada"<<endl;
    cin>>horas1;
    cout<<"MIN entrada"<<endl;
    cin>>minutos1;
    cout<<"SEG entrada"<<endl;
    cin>>segundos1;

    minutos1/=60;
    segundos1/=3600;
    cout<<horas1<<minutos1<<segundos1;

    if(minutos1>1)
    {
        horas1+=minutos1;
        entrada=horas1+segundos1;

    }
        else

    if(segundos1>1)
        {
            minutos1+=segundos1;
            entrada=minutos1+segundos1;
            cout<<horas1<<entrada;

        }

}
