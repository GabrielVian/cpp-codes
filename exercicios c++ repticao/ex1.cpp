#include <iostream>

using namespace std;

int main(){
    int i;
    float altura, base, area;

    for (i = 0; i < 5; i++){

        cout << "Digite a altura:";
        cin >> altura;
        cout << "Digite a base: ";
        cin >> base;

        area = (base*altura)/2;

        cout << area << endl;

    }
    

}