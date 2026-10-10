 #include <iostream>
 using namespace std;

 float AreaTriangulo(float base, float altura){
 return (base*altura)/2;
 }

int main() {
    float b,h,area;


    cout << "Digite a base: ";
    cin >> b;

    cout << "Digite a altura: ";
    cin >> h;

    area = AreaTriangulo(b,h);
    cout << "A area do triangulo eh: " << area << endl;

    return 0;
}
