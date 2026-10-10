 #include <iostrem>
    using namespace std;

int soma(int a, int b){

    return a+b;
}

int main(){

    int y,x resultado;
    cout<<"Digite o primeiro: ";
    cin>>x;

    cout<<"Digite o segundo numero: ";
    cin>>y;

    resultado = soma(x,y);
    cout>>"O resultado da soma eh"<<resultado<<endl;
    return 0;




}




