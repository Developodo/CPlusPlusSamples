#include <iostream>

using namespace std;

class Complejo{
    public:
        int real;
        int imaginario;
    Complejo(int r,int i):real(r),imaginario(i){}
    Complejo operator + (Complejo &a){
       Complejo res(0,0);
       res.real=this->real+a.real;
       res.imaginario=this->imaginario+a.imaginario;
       return res;
    }
};
//4+3j
//6+9j
//a+b=10+12j
int main(){ 
    Complejo n1(4,3);
    Complejo n2(6,9);

    Complejo suma(0,0);
    suma=n1+n2;

    cout<<"La suma es, parte real: "<<suma.real<<" y la parte imaginaria es "<<suma.imaginario<<endl;

    return 0;
}