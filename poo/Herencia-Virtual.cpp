#include <iostream>

using namespace std;

class Animal{
    private:
    string raza;
    int edad;


    public:
    virtual void saluda()=0; //pure virtual
};
class Perro : Animal{
    public:
    //Obligado si quiero poder instanciar Perros
    void saluda(){
        cout << "GUAU"<<endl;
    }
};
class Gato : Animal{
    public:
    //Obligado si quiero poder instanciar Perros
    void saluda(){
        cout << "MIAU"<<endl;
    }
};

int main(){
  // Animal a1;  no se puede instanciar porque es una clase abstracta
    Perro p1;
    p1.saluda();
    return 0;
}