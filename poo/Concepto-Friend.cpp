#include <iostream>

using namespace std;

class Temperatura{
    private:
        int max,min,actual;

    public:
        Temperatura(int M,int m,int a):max(M),min(m),actual(a){}
        friend int calculaTemperaturaMedia(Temperatura a,Temperatura b);
    
};
//Esta función puede acceder a todos los atributos y funciones (privadas, protected, públicas) de las clases amigas
int calculaTemperaturaMedia(Temperatura a,Temperatura b){
    int media=(a.actual+b.actual)/2;
    return media;
}

int main(){
    Temperatura cordoba(42,0,25);
    Temperatura bilbao(35,-5,15);
    int m=calculaTemperaturaMedia(cordoba,bilbao);
    cout << "La temperatura media en la península es de "<< m << endl;

}