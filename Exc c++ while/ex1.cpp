#include <iostream>

using namespace std;

int main(){
    int i;
    float altura, base, area;
    i = 0;
    while (i < 5){

        cout << "Digite a altura:";
        cin >> altura;
        cout << "Digite a base: ";
        cin >> base;

        area = (base*altura)/2;

        cout << area << endl;

        i++;
    }
    

}