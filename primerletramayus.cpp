#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int i;
    char pb[50];

    cout<<"INGRESE PALABRAS "<<endl;
    cin.getline(pb, 50);

    pb[0]=toupper(pb[0]);
    for(i =1; i<pb[i]; i++)
    {
        if(pb[i-1]!=' ')
        {
            pb[i]=tolower(pb[i]);

        }
        else
            pb[i]=toupper(pb[i]);
    }
    cout<<pb;
}
