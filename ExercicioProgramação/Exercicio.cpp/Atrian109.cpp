#include <iostream>
using namespace std;

 class Triangulo{
 public:
        double Base;
        double altura;

    Triangulo (double l, double a);
    ~Triangulo();
    double calcularArea();

}
Triangulo::Triangulo(double l, double a){
    base = l;
    altura = a;
}
Triagulo::~Triagulo(){

}
double Triangulo::calcularArea(){
    return (base * altura) /2;
}
public:
       int main(){
    cout << "Digite a base do Triângulo: ";
    cin >> base;

    cout << "Digite a altura do Triângulo: ";
    cin >> altura;


    area = (base * altura) / 2;


    cout << "A área do triângulo é: " << area << endl;




return 0;
    }
