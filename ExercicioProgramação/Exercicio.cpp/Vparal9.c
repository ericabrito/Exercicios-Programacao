 #include <iostream>
 using namespace std;

 class Paralelepipedo{
 public:
        double comprimento;
        double largura;
        double altura;

    Paralelepipedo(double 1, double a, double b);
    ~Pralelepido();
        double calcularArea();

}
    Paralelepipedo::Paralelepipedo(double 1, double a, double b){
        volume = 1;
        largura = a;
        altura = b;
}
    Paralelepipedo::~Paralelepipedo(){

}
    double Paralelepipedo::calcularArea(){
        return comprimento, * largura, * altura, * volume;
}
public:
        int main() {

        cout << "Digite o comprimento do paralelepípedo: ";
        cin >> comprimento;

        cout << "Digite a largura do paralelepípedo: ";
        cin >> largura;

        cout << "Digite a altura do paralelepípedo: ";
        cin >> altura;

        volume = comprimento * largura * altura;


        cout << "O volume do paralelepípedo é: " << volume << endl;

        return 0;
}



return 0;
    }
