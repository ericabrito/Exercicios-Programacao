#include <iostream>
using namespace std;

class Pessoa{
private:
    string nome;
    int idade;

public:
   void setNome(string _nome);
    string getNome();
    void setIdade(int _idade);
    int getIdade();

};

void Pessoa::setNome(string _nome){
    nome =_nome;
}

 void Pessoa::setIdade(int _idade){
 idade = _idade;
}


void Pessoa:: getNome(int _idade){
    idade = _idade;
}

int Pessoa:: getIdade(){
    return idade;
}

int main(){
    Pessoa p1;
    p1.setNome("Erica");
    p1.setIdade("19");

    cout <<" Nome: " <<p1.getNome() <<" e idade:" << p1. get endl;

return 0;

}
