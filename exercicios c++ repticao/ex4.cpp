#include <iostream>

using namespace std;

int main(){

    float x, y, valor;

    cout << "Valor de X: ";
    cin >> x;

    for(valor = 1; valor<101; valor++){
        y = y + (x + valor);
    }
    cout << y;

    return 0;
}