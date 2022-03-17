#include <iostream>
using namespace std;
void suma(int a,int b);
int main(){
    int entero=0;
    float flotante=0;
    double doble=0;
    char letra = 'a';
    bool esCorrecto=true;

    cout<<"Hola Mundo "<<entero<<endl;
    suma(2,3);
    return 0;
}

void suma(int a,int b){
    cout<<"La suma es : "<<(a+b)<<endl;
}