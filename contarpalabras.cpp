#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    char pala[50];
    int conta=0;

    cout<<"INGRESE PALABRAS "<<endl;
    cin.getline(pala, 50);

    for (int i=1; pala[i]!='\0'; i++)
    {
        if(pala[i-1]==' '&& isalpha(pala[i]))
        {
            ++conta;

        }
        if(isalpha(pala[0]))
        {
            ++conta;
        }

    }
    cout<<"el numero de palabras es "<<conta;
}
