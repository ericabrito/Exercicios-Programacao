#include <iostream>
using namespace std;

// Funções das operações básicas
float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b == 0) {
        cout << "Erro: divisao por zero!" << endl;
        return 0;
    }
    return a / b;
}

// Função principal
int main() {
    float num1, num2;
    int opcao;

    cout << "===== CALCULADORA SIMPLES =====" << endl;
    cout << "1 - Soma" << endl;
    cout << "2 - Subtracao" << endl;
    cout << "3 - Multiplicacao" << endl;
    cout << "4 - Divisao" << endl;
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    switch (opcao) {
        case 1:
            cout << "Resultado: " << soma(num1, num2) << endl;
            break;
        case 2:
            cout << "Resultado: " << subtracao(num1, num2) << endl;
            break;
        case 3:
            cout << "Resultado: " << multiplicacao(num1, num2) << endl;
            break;
        case 4:
            cout << "Resultado: " << divisao(num1, num2) << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
    }

    return 0;
}
