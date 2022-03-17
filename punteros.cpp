#include <iostream>
using namespace std;

int main(){
    int numero=8;

    cout << "El valor del número es: "<< numero << endl;
    cout << "La dirección de memoria es: "<< &numero << endl;

    int *puntero;  //has declarado una variable de tipo puntero a entero -> 4 bytes
    puntero=&numero;  //almacenar en puntero la dirección de número

    cout << "El valor de puntero es (dirección de memoria de número): "<< puntero << endl;
    cout << "La dirección de memoria de puntero: "<< &puntero << endl;
    cout << "El valor que hay almacenado en la dirección de memoria, es decir el valor de número "<< *puntero << endl;

    *puntero=90;
    cout << "El valor de puntero es (dirección de memoria de número): "<< puntero << endl;
    cout << "La dirección de memoria de puntero: "<< &puntero << endl;
    cout << "El valor que hay almacenado en la dirección de memoria, es decir el valor de número "<< *puntero << endl;

    cout << "Qué paso con número "<<numero<<endl;
    return 0;
}