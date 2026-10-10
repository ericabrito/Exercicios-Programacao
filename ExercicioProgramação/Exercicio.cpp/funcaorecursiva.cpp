//função recursiva p calcular a soma dos primeios n numero naturais//

#include <iostream>
using namespace std;

int soma(int n){
    if(n <= 0){
        return 0;
    } else{
        return n + soma(n-1);
    }

}

    int main(){
        int numero;
        cout << " Digite um numero: ";
        cin >> numero;

        int resultado = soma(numero);
        cout << " A soma dos primeiros " << numero << " numero naturais eh" << resultado << endl;
        return 0;


    return 0;

    }
