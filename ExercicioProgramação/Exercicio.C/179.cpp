 #include <iostream>
 using namespace std;

    class Pessoa {
    public:
    // atributos:
    string nome;

    //metodo:
    void dizerOla();


};

    class Aluno : public Pessoa{
        public:
 //atributos
    string matricula;

 //metodos
    void exibirMatricula();


};
    void Pessoa::dizerOla(){
        cout<< "Ola, o nome do aluno eh:" <<nome <<endl;

}
    void Aluno::exibirMatricula(){
        cout <<"A matricula do aluno eh: "<<matricula << endl;
}


    int main(){
        Aluno aluno;
        aluno.nome = "Eistein";
        aluno.matricula = "15325566";

        aluno.dizerOla();
        aluno.exibirMatricula();

    return 0;
    }
