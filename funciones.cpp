#include <iostream>
using namespace std;

void incrementaOLD(int *a);
void incrementa(int &a);

int main(){
    int numero=2;
    cout << numero << endl;
    incrementa(numero);
    incrementaOLD(&numero);
    cout << numero << endl;
    return 0;
}

void incrementa(int &a){
   a++;
}
void incrementaOLD(int *a){
   (*a)++;
}