#include <iostream>
using namespace std;

double somar(double a, double b){
    return a + b;
}
double subtracao(double a, double b){
    return a - b;
}
double multiplicacao(double a, double b){
    return a * b;
}
double divisao(double a, double b){
    return a / b;
}

int main(){
    int opcao;
    double a, b, resultado;

    do{
        cout <<" 1 - Somar\n";
        cout <<" 2 - Subtracao\n";
        cout <<" 3 - Multiplicacao\n";
        cout <<" 4 - Divisao\n";
        cout <<" 0 - Sair\n";
        cout <<" Escolha: ";
        cin >> opcao;

        switch (opcao){
            case 1:
                cout<<"Digite o primeiro numero: ";
                cin >> a;
                cout<<"Digite o segundo numero: ";
                cin >> b;

                resultado = somar(a, b);
                cout<<"Resultado da soma: " << resultado << endl;
                break;

            case 2:
                cout<<"Digite o primeiro numero: ";
                cin >> a;
                cout<<"Digite o segundo numero: ";
                cin >> b;

                resultado = subtracao(a, b);
                cout<<"Resultado da subtracao: " << resultado << endl;
                break;

            case 3:
                cout<<"Digite o primeiro numero: ";
                cin >> a;
                cout<<"Digite o segundo numero: ";
                cin >> b;

                resultado = multiplicacao(a, b);
                cout<<"Resultado da multiplicacao: " << resultado << endl;
                break;

            case 4:
                cout<<"Digite o primeiro numero: ";
                cin >> a;
                cout<<"Digite o segundo numero: ";
                cin >> b;

                resultado = divisao(a, b);
                cout<<"Resultado da divisao: " << resultado << endl;
                break;

            case 0:
                cout << "Encerrando...\n";
                break;

            default:
                cout << "Opcao invalida!\n";
        }
    } while(opcao != 0);

    return 0;
}
