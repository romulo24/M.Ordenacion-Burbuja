/*
* Estrucrutra de Datos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 11-04-2021
* METODO DE ORDENAMIENTO BURBUJA
*/
#include<iostream>
using namespace std;
int main()
{


    int temp,t;
    cout<<"ORDENAMIENTO UTILIZANDO EL METODO DE BURBUJA"<<endl;
    cout<<endl;
    cout<<"Cantidad de numeros que desea Ingresar: ";
    cin>>t;
    int lista[t];
    for(int i=0;i<t;i++)
    {
        cout<<"POSICION "<<"["<<i<<"]"<<" : ";
        cin>>lista[i];

    }

cout<< "\n i" << "\tj" << "\tlista[j]" << "\tlista[j+1]" << "\ttemp" << "\tlista[j]" << "\tlista[j+1]" << "\tlista" <<endl;

for(int i=1;i<t;i++){
      cout<< " " <<i;
        for(int j=0;j<t-1;j++){

            cout<< "\t" << j ;
            cout<< "\t   " << lista[j];
            cout<<"\t\t   " <<lista[j+1];
            if(lista[j]>lista[j+1])
            {
                temp=lista[j+1];
                lista[j+1]=lista[j];
                lista[j]=temp;
            }
            cout<< "\t\t "<< temp ;
            cout<< "\t   "<< lista[j];
            cout<< "\t           "<<lista[j+1];
            cout<< "\t\t";
            for(int i=0;i<t;i++)
            {
            cout<<lista[i]<<"-";
            }
cout <<endl;

        }
    }
    cout<<endl;
   cout<<"Resultado :"<<endl;

       cout<<"[";
       for(int i=0;i<t;i++)
       {
           cout<<" "<<lista[i];
       }
       cout<<" ]";
       cout<<endl;
}
