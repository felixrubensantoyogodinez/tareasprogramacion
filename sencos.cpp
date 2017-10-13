#include <iostream>
#include <math.h>
using namespace std;

double log(double ex, double lim);
double cos(double ex, double lim);
double sein(double ex, double lim);
double fraccion(double r);
double factorial(double num);
int main()
 {
    double  lim, ex;
    int menu;

    do {
        cout<<"1. calcular logaritmo"<<endl;
        cout<<"2. calcular coseno "<<endl;
        cout<<"3. calcular seno"<<endl;
        cout<<"0. salir"<<endl;
        cin>>menu;
        if (menu==1)
        {
            cout<<"introduza exponente junto con el limite"<<endl;
            cin>>ex>>lim;
            log(ex, lim);

        }
        else
            if (menu==2)
        {
            cout<<"introduza exponente junto con el limite"<<endl;
            cin>>ex>>lim;
            cos(ex,lim);
        }
        else
            if (menu==3)
        {
            cout<<"introduza exponente junto con el limite"<<endl;
            cin>>ex>>lim;
            cout<<sein(ex, lim)<<" seno"<<endl;

        }

    } while (menu!=0);
    return 0;
}

double log(double ex, double lim)
{

    double r, a = 0.0, x= 1;
    for (int i=1; i<=lim; i++)
    {
        r = ((ex-1)/ex);
        r = pow(r, x);
        if(i>=2)
        {
            r *= fraccion(i);
        }
        a += r;
        x++;
    }
   cout<<a<<endl;

    return 0;
}



double cos(double ex, double lim)
{
    int a = 1 , p = 0;

    double y = 0.0, x = 0.0;
    for (int  i=1; i<=lim; i++)
    {
        y = (pow(ex, p));
        y /=  factorial(p);
        p+=2;
        y *= a;
        a *= -1;
        x += y;
    }

    cout<<x<<endl;
    return 0;
}

double sein(double ex, double lim)
{
    double a=1, x=0,p =1, y=0;

    for (int i =1; i<= lim; i++) {
        x = pow(ex, p);
        x /= factorial(p);
        x *= a;
        a*= -1;
        y += x;
        p+=2;
    }


    return y;
}
double fraccion(double r)
{
    double frac=1, a=0;
        a += frac/r;

    return a;
}


double factorial(double num)
{
    int fac=1;
    for (int i=num; i>0; i--)
    {
        fac *=i;
    }
    return fac;
}

