#include <iostream>

using namespace std;

class Empleado{
    private:
        string nombre;
        int edad;

    protected:
        int cod;

    public:
        Empleado(){
            nombre=""; edad=-1;
        }
        Empleado(string n,int e,int c):nombre(n),edad(e),cod(c){
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
            //cout << "Adiós "<< nombre <<" con el corazón" << endl;
        }
        void saluda(){
            cout << "Hola mundo" << endl;
        }
};
string Empleado::getNombre(){
    return nombre;
}
int Empleado::getEdad(){
    return edad;
}

class Profesor : public Empleado{
    private:
        string asignatura;
    
    public:
    Profesor():Empleado(),asignatura(""){}
    Profesor(string n,int e,int c,string asig):Empleado(n,e,c),asignatura(asig){ 
    }

    string getAsignatura(){
        return asignatura;
    }
    void setAsignatura(string asignatura){
        this->asignatura=asignatura;
    }
    void saluda(){
        cout << "Hola queridos alumnos" <<endl;
    }

};

class Alumno : public Empleado{
    private:
        string curso;
    
    public:
    Alumno():Empleado(),curso(""){}
    Alumno(string n,int e,int c,string cur):Empleado(n,e,c),curso(cur){ 
    }

    string getCurso(){
        return curso;
    }
    void setCurso(string curso){
        this->curso=curso;
    }
    void saluda(){
        cout << "Hola querido profe" <<endl;
    }

};

int main(){

    Empleado emps[2];

    Profesor p1("Manu",34,78,"Informática");
    Alumno a1("Carlos",45,23,"Historia");

    Empleado *ex = &p1;
    
    cout << ex->getNombre() << endl;

    ex= &a1;

    cout << ex->getNombre() << endl;


    emps[0]=p1;
    emps[1]=a1;

    for(int i=0;i<2;i++){
        cout << emps[i].getNombre() << endl;
    }

    return 0;
}