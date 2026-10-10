#include <iostream>
using namespace std;
 class Calculadora{
public:
    int somar(int a, int b){
    return a+b;
    }
    double somar(double a, double b){
    return a+b;
    }

    int somar(int a,int b, int c){
    return a+b+c;
    }
 };

 int main(){
    Calculadora calc;

    cout << "O valor da soma e: " << cal.somar(2,5) <<endl;
    cout << "O valor da soma e: " << cal.somar(2,5,2,3) <<endl;
    cout << "O valor da soma e: " << cal.somar(2,2,6) <<endl;

 return 0;
 }










