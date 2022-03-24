#include<iostream>

using namespace std;

class Prueba{
    int x;
    

    public:
    static int xstatic;
    Prueba(int x,int y){
        this->x=x;
        xstatic=y;
        imprimir();
    }
    void imprimir();
    static int devuelveXStatic(){
        return xstatic;
    }
};
int Prueba::xstatic;
void Prueba::imprimir(){
    cout << "X -> "<<x<<" X STATIC -> "<<xstatic<<endl;
}

int main(){
    Prueba p1(2,10);
    Prueba p2(9,99);
    p1.imprimir();
    Prueba::xstatic=-1;
    cout << "Para terminar, XSTATIC vale -> "<<Prueba::devuelveXStatic() << endl;

    return 0;
}