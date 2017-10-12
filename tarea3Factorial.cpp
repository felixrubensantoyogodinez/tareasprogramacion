/*Leer un numero y mostrar su factorial, el factorial de un numero n,
 se expresa así n! y se obtiene multiplicando todos los numeros positivos
 de 1 hasta el numero: 5! = 1 x 2 x 3 x 4 x 5*/
 #include <iostream>
 using namespace std;
 int main ()
 {
     int x, y=1, q;
     cout<<"tecle 1 si quiere saber si un numero es primo : "<<endl;
     cout<<"tecle 2 si quiere saber el factorial de un numero: "<<endl;
     cout<<"tecle 3 si quiere saber el promedio de una calificacion: "<<endl;
     cin>>q;
     int numero,r=0,i;
     int  t, s, contador;
     float cal;
     float suma=0;
     if(q==1)
     {
         cout<<"introduzca el numero numero"<<endl;
         cin>>numero;
         for(i=1;i<(r+1);i++){
            if(r%i==0){
                r++;
            }
         }
         if(r!=2){
              cout<<"el numero no es primo";
         }
         else{
                cout<<"el numero si es primo";
         }
     }
     else if(q==2)

     {

        cout <<"ingrese un numero "<<endl;
        cin>>x;

        for(int i=1; i<=x; i++)
        {
            y*=i;

        }
        cout << "el numero factorial es "<<y;
     }

     else   if(q==3)
     {
        contador=0;
         do
         {
              cout<<"ingrese la calificacion" <<endl;
              cin>>cal;

              suma +=cal;
              contador++;

         }while(cal!=-1);
         float promedio;
         contador-=1;
         suma+=1;

         promedio=suma/contador;
         cout<<promedio;


        }






 }
