#include <iostream>
using namespace std;
void primos(bool a[], int n);


int main ()
{
    int n=1000;
    bool a[n];

    primos(a, 1000);


}
void primos(bool a[], int n)
{
    for(int i=0; i<n; i++)
    {
        a[i]=true;
    }
    for(int i=2; i<n; i++)
    {
        for(int j=2; i*j<n; j++)
        {
            a[i*j]=false;
        }
    }

    for(int i=2; i<n; i++)
    {
        if(a[i])
        {
            cout<<i<<"  ";
        }

    }

}
