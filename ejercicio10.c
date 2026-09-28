#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{

  const int n=10;
  double valores[n];
 double suma=0;
 
 for(int i=0;i<n;i++){
   cout <<"ingrese la observacion"<<(i+1)<<": ";
   cin >> valores[i];
   suma+=valores[i];
 }
 double media=suma/n;
 int contador =0;
 for(int i=0;i<n;i++){
 if(valores[i]>media)contador++;}
 cout<<"media aritmetica:\n"<<media<<endl;
 cout<<"observaciones por encima de la media: "<<contador<<endl;
 



    return 0;
}
