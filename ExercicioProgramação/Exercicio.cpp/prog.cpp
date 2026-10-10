//Código com passagem de parametro por ponteiro

#include <iostream>

using namespace std;

void lerNotas(float *nota1, float *nota2){
cout <<"Digite a note 1: ";
cin >> *nota1;
cout << "Digite a nota 2:";
cin >> *nota2;

}

float calcularMedia(float nota1, float nota2){
 float media;
 media = (nota1 + nota2)/2.0;
 cout << " o valor da media eh" << media << endl;

}

int main(){
 float nota1, nota2, media;

 lerNotas(&nota1, &nota2);
 calcularMedia(nota1, nota2);

 return 0;



}
