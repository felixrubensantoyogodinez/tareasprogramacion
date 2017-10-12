#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int fac1=1, fac2=1, n, y;
    float  z, r=1, x, r2=1, z2, num=1;


	cout<<"introduzca 1 si quiere   la constante de Euler"<<endl;
	cout<<"introduzca 2 si quiere  la constante de Euler al cuadrado"<<endl;
	cout<<"introduzca 0 si quiere Salir"<<endl;
	cin>>y;

    switch (y)
        {
            case 1:
                cout<<"introduzca el nuemro"<<endl;
                cin>>n;

                for(int i=1; i<=n; i++)
                    {

                        fac1*=i;
                        z=num/fac1;
                        r+=z;
                        cout<<"1"<<"/"<<i<<"!";
                    }
        				cout<<"="<<r;

        				break;
            case 2:
                cout<<"introduzca el numero "<<endl;
                cin>>n;
                cout<<"introduzca el numero x"<<endl;
                cin>>x;

                for(int i=1; i<=n; i++)
                    {

                        fac2*=i;
                        z2=pow(x,i)/fac2;
                        r2+=z2;
                        cout<<x<<"^"<<i<<"/"<<i<<"!";

                    }
        				cout<<"="<<r2;

                        break;

            case 0:
                {
                    break;
                }

    		}

}
