#include <iostream>
using namespace std;

class Exemplo {
public:
    Exemplo(){
    cout <<"Construtor chamando!" << endl;
    }

    ~Exemplo(){
    cout << " Destrutor chamando!" << endl;
    }
};
int main(){
    Exemplo obj;
 // O destrutor será chamado automaticamente aqui, ao final de escopo
    return 0;
}
