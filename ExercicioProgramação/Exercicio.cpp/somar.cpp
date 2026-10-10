#include <iostream>
using namespace std;

float somar(float a, float b){
    return a+b;
}


float subtrair(float a, float b){
    return a-b;
}

int main(){
    float n1, n2;
    float resultado, outroresultado;
    cout << "Digite um numero!" ;
    cin >> n1;
    cout << "Digite outro numero: ";
    cin >> n2;

    resultado = somar(n1, n2);
    outroresultado = subtrair(n1,n2);
    cout << "O valor da soma eh: " << resultado << endl;
    cout << "O valor da subtracao eh: " << outroresultado << endl;
    return 0;



}
