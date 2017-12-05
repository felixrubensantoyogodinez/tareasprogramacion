#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dado1 ();
int dado2 ();
void creacion_tabla (int juego[], int n);
void serp_esca(int juego[], int n2);
int main ()
{
    int d1=0, d2=0, juego[100], jugador1=0, jugador2=0, sumaD2, salir=0, nose, n, n2;

    creacion_tabla(juego, 100);
    serp_esca(juego, n);



    nose=1;
    srand(time(NULL));

    while(salir==0)
    {
        if (nose==2){
        nose=3;
        }

        if(nose==1)

    {
        cout<<endl;
    cout<<"PRECIONE LA TECLA A Y ENTER PARA COMENZAR "<<endl;
    cin.get();
    cout<<endl;
    cout<<"PRIMERO JUGADOR "<<endl;
    //GENERAR LOS DOS DADOS
    d1=dado1();
    d2=dado2();
    sumaD2=d1+d2;

    jugador1=juego[jugador1];


    cout<<"DADO UNO SALIO "<<d1<<endl;
    cout<<"DADO DOS SALIO "<<d2<<endl;
    cout<<"EL PRIMER JUGADOR AVANZA "<<sumaD2<<endl;

    jugador1+=sumaD2;

    cout<<endl;
    cout<<"EL PRIMERO JUGADOR SE ENCUENTRA EN LA CASILLA -" <<juego[jugador1]<<"-"<<endl;

    if(jugador1>=100)
    {
        cout<<" EL PRIMER JUGADOR A GANADO "<<endl;
        salir=3;
    }
    nose=2;
    }

    //SEGUNDO JUGADOR

    if(nose==3)
    {
        cout<<endl;
    cout<<"SEGUNDO JUGADOR "<<endl;
    cin.get();


    d1=dado1();
    d2=dado2();
    sumaD2 = d1 + d2;

    jugador2 = juego[jugador2];

    cout<<"DADO UNO SALIO "<<d1<<endl;
    cout<<"DADO DOS SALIO "<<d2<<endl;
    cout<<"EL SEGUNDO JUGADOR AVANZA "<<sumaD2<<endl;



    jugador2 += sumaD2;

    cout<<endl;
    cout<<"EL SEGUNDO JUGADOR SE ENCUENTRA EN LA CASILLA -"<<juego[jugador2]<<endl;
    if(jugador2>=100)
    {
        cout<<"EL SEGUNDO JUGADOR A GANADO  "<<endl;
        salir=3;
    }
    nose=1;
    }
    }



}
int  dado1 ()
{
    int dado1;

    dado1 = 1 + rand () % 6;

    return dado1;


}
int dado2()
{
    int dado2;
    dado2 = 1 + rand () % 6;
    return dado2;

}
void creacion_tabla (int juego[], int n)
{
    for(int i=0; i<=100; i++)
    {
        juego[i]=i;
    }

}
void serp_esca(int juego[], int n2)
{
    //ESCALERAS
    juego[5]=12;
    juego[17]=23;
    juego[21]=37;
    juego[29]=40;
    juego[36]=46;
    juego[43]=52;
    juego[50]=80;
    juego[58]=63;
    juego[70]=88;
    juego[80]=95;
    //SERPIENTES
    juego[20]=6;
    juego[34]=15;
    juego[42]=26;
    juego[49]=30;
    juego[58]=47;
    juego[65]=42;
    juego[72]=49;
    juego[82]=67;
    juego[91]=75;
    juego[99]=69;

}
