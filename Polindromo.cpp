#include <iostream>
#include <string.h>

using namespace std;

int palindromo(char c[], int inicio, int fin);

int main()
{
    char c[100];

    cout<<"INGRESE UNA PALABRA O FRACE "<<endl;
    cin.getline(c,100);
    if(palindromo(c,0,strlen(c)-1)==1)
        cout<<"SI ES PALINDROMO ";
    else
        cout<<"NO ES PALINDROMO";
}

int palindromo(char c[], int ini, int fin)
{
    if(ini<fin)
    {
        if(c[ini]==' ')
            return palindromo(c,++ini,fin);
        else if(c[fin]==' ')
            return palindromo(c,ini,--fin);
        else if(c[ini]!=c[fin])
            return 0;
        else
        {
            ini++;
            fin--;
            return palindromo(c,ini,fin);
        }

    }
    else
        return 1;

}

