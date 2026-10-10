#include <iostream>
using namespace std;

class Pessoa{
    public:
    string nome;
    int idade;

    Pessoa(string nome, int i);
    void declarar();
};

Pessoa:: Pessoa(string n, int i){
    nome = n;
    idade = i;
}
void Pessoa::declarar(){
    cout <<" O nome do individou eh " <<nome << "e sua idade"<< idade << endl;

}
int main(){
    Pessoa p1("Claudia", 19);
    Pessoa p2("Arthur", 22);

    p1.declarar();
    p2.declarar();

return 0;

}
