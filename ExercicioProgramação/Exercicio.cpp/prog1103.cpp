#include <iostream>

using namespace std;

int main(){

int x = 10;
int *p = &x;

cout << "O valor de x eh:" << x << endl;
cout << " O endereço de x eh:" << &x << endl;
cout << " O valor guardado em p: " << p << endl;
cout << " O valor apontado por p: " << *p << endl;

/*um ponteiro é uma variável que guarda o endereço
de memoria de outro variável.*/
return 0;

}
