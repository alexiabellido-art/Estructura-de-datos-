#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{

  const int clave_correcta=1234;
  int intento;
  int numintentos=0;
 
do{
    cout<<"ingrese la clave numerica: ";
    cin >>intento;
    numintentos++;
    
} while(intento!=clave_correcta)
cout<<"clave correcta ingresada: "<<endl;
cout<<"num de intentos realizados: "<<numintentos<<endl;
 
    return 0;
}
