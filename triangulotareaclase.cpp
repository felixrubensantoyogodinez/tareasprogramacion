#include <iostream>
using namespace std;
//PROTOTIPOS
void triangulo1(int triangulo);
void triangulo2(int triangulo);
void triangulo3(int triangulo);
void triangulo4(int triangulo);

int main ()
{
    char car='*';
    int menu, triangulo;
    int j , r ,s, tam, i;
    int resul ;
    do{
        cout<<"1 primer triangulo "<<endl;
        cout<<"2 segundo triangulo "<<endl;
        cout<<"3 tercer triangulo "<<endl;
        cout<<"4 cuarto triangulo "<<endl;
        cout<<"0 salir ";
        cin>>menu;


        if(menu==1)
        {
            cout<<"ingrese el tamano "<<endl;
            cin>>tam;
            triangulo1(tam);

        }
        if(menu==2)
        {
            cout<<"ingrese el tamaño "<<endl;
            cin>>tam;
            triangulo2(tam);
        }
        if(menu==3)
        {
            cout<<"ingrese el tamano "<<endl;
            cin>>tam;
            triangulo3(tam);

        }
        if(menu==4)
        {
            cout<<"ingrese el tamano "<<endl;
            cin>>tam;
            triangulo4(tam);
        }


    }while(menu!=0);
    return 0;



}
void triangulo1(int tam)
{
    for(int i=1; i<=tam; i++)
            {
                for(int j=1; j<=i; j++)
                {
                    cout<<"*";
                }
                    cout<<endl;

            }

}
void triangulo2(int tam)
{
    for(int r=1; r<=tam; r++)
            {

                for(int s=r; s<=r; s++)
                {
                    cout<<"*";

                }
                cout<<endl;

            }

}
void triangulo3(int tam)
{
    int s=tam;
    for(int i=1; i<=tam; i++)
    {
        for(int j=s; j<tam; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=s; k++)
        {
            cout<<"*";
        }
    cout<<endl;
    s--;
    }

}
void triangulo4(int tam)
{
    int s=tam;
    for(int i=1; i<=tam; i++)
    {
        for(int j=1; j<s; j++)
        {
            cout<<" ";
        }
        for(int k=s; k<=tam; k++)
        {
            cout<<"*";
        }
    cout<<endl;
    s--;
    }

}
