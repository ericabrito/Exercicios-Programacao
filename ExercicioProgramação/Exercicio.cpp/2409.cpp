#include <iostream>

using namespace std;

class Pessoa{
public:
    string nome;
    string email;
    string cpf;
};
class Aluno : public Pessoa{
    public:
    string matricula;
    void exibirDados();

 void Aluno::exibirDados(){
    cout << " O nome do aluno eh " << matricula << endl;
 }


};
 int main(){
    Aluno aluno;
    aluno.nome = "Erica";
    aluno.matricula = "1234";

    aluno.exibirDados();


 return 0;
 }
