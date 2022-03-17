#include <iostream>
using namespace std;

int main(){
    int vector[]={1,2,3};  //int *vector = malloc....
    cout << "La dirección de comienzo del vector es: "<<vector<<endl;
    for(int i=0;i<3;i++){
        cout << "El valor del elemento "<<i<<" es: "<<vector[i]<<endl;
        cout << "??? "<<i<<" es: "<< &vector[i]<<endl;
        cout <<"-----------------------"<<endl;
    }
    int *puntero=vector;
    for(int i=0;i<3;i++){
        cout << "El valor del elemento "<<i<<" es: "<<*puntero<<endl;
        cout << "??? "<<i<<" es: "<< puntero<<endl;
        puntero++;
        cout <<"-----------------------"<<endl;
    }

    cout <<"Mira como se ha quedado puntero "<<puntero<<endl;
    cout <<"El valor de la dirección que almacena es "<<*puntero<<endl;
    puntero-=3;
    cout <<"Mira como se ha quedado puntero "<<puntero<<endl;
    cout <<"El valor de la dirección que almacena es "<<*puntero<<endl;
    return 0;
}