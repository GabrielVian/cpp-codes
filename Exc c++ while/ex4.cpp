#include <iostream>

using namespace std;

int main(){

    float x, y, valor;

    cout << "Valor de X: ";
    cin >> x;
    valor = 101;
    while(valor>0){
        valor--;
        y = y + (x + valor);
    }
    cout << y;

    return 0;
}