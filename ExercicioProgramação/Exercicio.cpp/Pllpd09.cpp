#include <iostream>
using namespace std;

 class Paralelepipedo{
 public:
        double base;
        double altura;
         double largura;

    Paralelepipedo (double b, double l, double a);
    ~Paralelepipedo();
    double volume();

};
Paralelepipedo::Paralelepipedo(double b, double l, double a){
    base = b;
    altura = a;
    largura = l;
}
Paralelepipedo::~Paralelepipedo(){

}
double Paralelepipedo::volume(){
    return base * altura * largura;
}

       int main(){
           double b, l, a;
    cout << "Digite o comprimento do paralelepipedo: ";
    cin >> b;

    cout << "Digite a largura do paralelepipedo: ";
    cin >> l;

    cout << "Digite a altura do paralelepipedo: ";
    cin >> a;




    Paralelepipedo p(b,l,a);

    cout << "O volume do paralelepido é: " << p.volume() << endl;




return 0;
    }

