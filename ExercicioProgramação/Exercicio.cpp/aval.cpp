#include <iostream>

using namespace std;

  double somar(double a, double b)
            { return a + b; }
  double subtracao(double a, double b)
            { return a - b; }
  double multiplicacao(double a, double b)
            { return a * b; }
   double divisao(double a, double b)
           { return a / b; }

    int main(){

         int opcao; double a, b, resultado;

         do{
          cout <<" 1 Somar" <<endl;
          cout <<" 2 Subtracao" <<endl;
          cout <<" 3 Multiplicacao" <<endl;
          cout <<" 4 Divisao" <<endl;
          cout <<" 0 - Sair\n";
          cout <<" Escolha: ";
          cin >> opcao;
           switch (opcao){

            case 1:

                  cout<<"Digite o primeiro numero:" <<endl;
                  cin >> a;
                  cout <<"Digite o segundo numero:" <<endl;
                  cin >> b; resultado= somar(a,b);
                  cout<<" O resultado da soma eh:" <<resultado<< endl;

            case 2:

                cout<<" Digite o primeiro numero:" <<endl;
                cin >> a;
                cout <<" Digite o segundo numero:" <<endl;
                cin >> b; resultado = subtracao(a,b);
                cout<<" O resultado da subtracao e:" <<resultado <<endl;

            case 3:

                cout <<" Digite o primeiro numero:" <<endl;
                cin >> a;
                cout <<"Digite o segundo numero:" <<endl;
                cin>> b; resultado = multiplicacao (a,b);
                cout <<" O resultado da multiplicacao e:" <<resultado <<endl;

            case 4:

                cout <<"Digite o primeiro numero:" <<endl;
                cin >> a;
                cout <<"Digite o segndo numero: " <<endl;
                cin >> b; resultado = divisao(a,b);
                cout << "O resultado da divisao e:" <<resultado <<endl;
            case 0:
                cout << "Encerrando...\n";
            default:
                cout << "Opcao invalida!\n";
           }
                }while(opcao !=0);

return 0;
    }


