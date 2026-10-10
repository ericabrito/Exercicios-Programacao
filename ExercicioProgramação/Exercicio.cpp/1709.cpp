#include <iostream>
using namespace std;


 class Pessoa {
    public:

    string nome;
    string email;
    string telefone;

    void exibirNome();
   void exibirEmail();
   void exibirTelefone();


};

    class Professor : public Pessoa{
        public:

    string disciplina;
  string idade;


    void exibirDisciplina();
   void exibirIdade();



};
    void Pessoa::exibirNome(){
        cout<< "Ola,diga ser nome eh:" <<nome <<endl;

}
    void Professor::exibirDisciplina(){
        cout <<"A disciplina do professor eh: "<< disciplina << endl;
}
    void Professor::exibirIdade(){
        cout << "A idade eh: "<< idade << endl;
    }
    void Pessoa::exibirEmail(){
    cout <<"O email eh: "<< email << endl;

    }
    void Pessoa::exibirTelefone(){
    cout << "Seu numero de telefone eh:"<< telefone << endl;
    }


    int main(){
        Professor professor;
        professor.nome = "Sued";
        professor.disciplina = "Matematica";
        professor.idade = "38";
        professor.email = "sued140296@outlook.com";
        professor.telefone = "3336-5669";

        professor.exibirNome();
        professor.exibirDisciplina();
        professor.exibirIdade();
        professor.exibirEmail();
        professor.exibirTelefone();
    return 0;
    }
