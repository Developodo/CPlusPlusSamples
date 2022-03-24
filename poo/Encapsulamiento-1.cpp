#include <iostream>

using namespace std;

class Empleado{
    private:
        string nombre;
        int edad;

    public:
        Empleado(){
            nombre=""; edad=-1;
        }
        Empleado(string n,int e):nombre(n),edad(e){
           // nombre=n; edad=e;
        }
        void setNombre(string nom){
            nombre=nom;
        }
        string getNombre();
        void setEdad(int ed){
            edad=ed;
        }
        int getEdad();
        ~Empleado(){
            cout << "Adiós "<< nombre <<" con el corazón" << endl;
        }
};

string Empleado::getNombre(){
    return nombre;
}
int Empleado::getEdad(){
    return edad;
}

int main(){
    Empleado *e1;  //Empleado e1
    Empleado e2("Carlos",42);    // Otra forma sería así -> =Empleado("Carlos",42);
    Empleado e3("Manu",25);

    e1=&e2;
    /*e2.setNombre("Carlos");
    e2.setEdad(42);*/
    e1->setNombre("Manu");
    cout << e2.getNombre() << "  " << e2.getEdad() << endl;  //direcionamiento directo
    cout << e1->getNombre() << "  " << e1->getEdad() << endl;  //direccionamiento indirecto
    return 0;
}