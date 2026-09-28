#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{

  const int total=10;
  int valor;
  int validos=0;
 
 for (int i = 0; i < total; i++) {
        cout << "Ingrese medicion " << (i + 1) << ": ";
        cin >> valor;
if (valor==999){
    cout<<"valor de finalizacion detectada terminado"<<endl;
    break;
    
}
    if (valor<0){
        cout<<"valor invalido se omite"<<endl;
    }
    validos++;
}
cout<<"valores validos procesados: "<<validos<<endl;
 
    return 0;
}
