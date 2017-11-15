#include <iostream>

using namespace std;
int menu();

void graficar_tortuga(int piso[][20], int x);
int main ()
{
    int piso[][20]={{0}};
    menu();
    graficar_tortuga(piso, 20);


}
int menu()
{
     cout<<"1. PLUMA HACIA ARRIBA "<<endl;
    cout<<"2. PLUMA HACIA ABAJO "<<endl;
    cout<<"3. GIRAR A LA DERECHA "<<endl;
    cout<<"4. GIRAR A LA IZQUIERDA "<<endl;
    cout<<"5,10 AVANZA 10 ESPACIOS "<<endl;
    cout<<"6. IMPRIME EL ARREGLO DE 20 POR 20 "<<endl;
    cout<<"7. FIN DE DATOS "<<endl;
}
void graficar_tortuga(int piso[][20], int x)
{
     int a, girarD=0, pos1=0, pos2=0,caminar=0;
     bool pintar= false;

     do
    {
        cin>>a;
        if(a==1)
        {
            pintar=false;
            cout<<"LA PLUMA SE ENCUENTRA ARRIBA "<<endl;
        }
        else
            if(a==2)
        {
            pintar=true;
            cout<<"LA PLUMA SE ENCUENTRA ABAJO "<<endl;

        }
        else
            if(a==3)
        {
            girarD+=1;
            if(girarD==4)
            {
                //GIRAR DERECHA
                girarD=0;
            }
        }
            else
                if(a==4)
            {
                girarD-=1;
                if(girarD<0)
                {
                    //GIRAR IZQUIERDA
                    girarD=3;
                }
            }
                else
                    if(a==5)
                {
                    cout<<"CUANTOS PASOS SE DARAN "<<endl;
                    cin>>caminar;
                    if(girarD==0)
                        for(int r=pos1, i=pos2, t=caminar; t>0; r++, t--)
                    {
                        if(r>=x-1)
                        {
                            t=0;
                            piso[i][r]=pintar;
                            pos1=r;
                        }
                    }

                else
                    if(girarD==1)
                    for(int r=caminar, i=pos2, t=pos1; r>0; r--, i++)
                {
                    if(pintar==true)
                    if(i>=x-1)
                    {
                        r=0;
                        piso[i][t]=pintar;
                    }
                    piso[i][t]=pintar;
                    pos2=i;
                }
                else
                    if(girarD==2)
                    for(int r=pos1, i=pos2, z=caminar; z>0; z--,r--)
                {
                    if(pintar==true)
                    {
                        if(r==0)
                        {
                            z=0;
                            piso[i][r]=pintar;
                        }
                        piso[i][r]=pintar;
                        pos1=r;
                        cout<<pos1<<"x/n";

                    }
                }
                else
                    if(girarD==3)
                    for(int t=pos2, i=pos1, z=caminar; z>0; z--, t--)
                {
                    if(pintar==true)
                    {

                        if(t==0)
                    {
                        i=0;
                        piso[t][i]=pintar;
                    }
                    piso[t][i]=pintar;
                    pos2=t;
                    }
                }

                }
                else
                    if(a==6)
                {
                     for(int i=0; i<x; i++)
                    {
                    for(int a=0; a<x; a++)
                    {
                    if(piso[i][a]==true)

                        cout <<  "*";
						else
                        cout <<  " ";
                }
                cout<<endl;
    }
    }
    }while(a!=7);
}


