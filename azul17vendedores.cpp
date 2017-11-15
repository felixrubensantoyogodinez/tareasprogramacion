#include <iostream>

using namespace std;
int menu ();
void tabla(int mat[][6], int x);
int agregar(int mat[][6], int x );
void vendedor(int mat[][6], int x);
void mercancia(int mat[][6], int x);



int main ()
{
    int mat [6][6]={{0}}, a;

    do
    {
        a=menu();

            if(a==1)
            {
                vendedor(mat,6);
                mercancia(mat,6);
                tabla(mat, 6);


            }
            if(a==2)
            {
                agregar(mat,6);

            }


    }
    while (a!=0);



}
int menu()
{
    int a;
    cout<<"PRECIONE 1 PARA MOSTRAR LA TABLA"<<endl;
    cout<<"PRECIONE 2 PARA AGREGAR ARTICULO"<<endl;
    cout<<"PRECIONE O PARA SALIR "<<endl;
    cin>>a;
    return a;
}
void tabla(int mat[][6], int x)
{
    for(int r=0; r<6; r++)
    {
        for(int c=0; c<x; c++)
        {
            if(c==5)
            {
                cout<<" = ";
                cout<<"\t"<<mat[r][c];
                cout<<" ";

            }
           else
            if (r==4)
            cout<<" ";

           else
            cout<<"\t"<<mat[r][c];
        }
        cout<<"\n";

    }

}
int agregar(int mat[][6], int x)
{
    int a, b, c;

    cout<<"NUMERO DE VENDEDOR "<<endl;
    cin>>a;

    cout<<"NUMERO DE PRODUCTO "<<endl;
    cin>>b;

    cout<<"IMPORTE DE LAS VENTAS "<<endl;
    cin>>c;

    if(a>4 || b>5)
    {
        cout<<"ERROR INTRODUZCA NUMERO MENOR"<<endl;
    }
    if(mat[a-1][b-1]!=0)
    {
        mat[a-1][b-1]+=c;
    }
    else
        mat[a-1][b-1]=c;

}
void vendedor(int mat[][6], int x)
{
    for(int r=0; r<x; r++)
    {
        for(int c=0; c<x-1; c++)
        {
            mat[r][x-1]+=mat[r][c];
        }
    }

}
void mercancia(int mat[][6], int x)
{
    for(int r=0; r<x; r++)
    {
        for(int c=0; c<x-1; c++)
        {
            mat[x-1][r]+=mat[c][r];
        }
    }

}

