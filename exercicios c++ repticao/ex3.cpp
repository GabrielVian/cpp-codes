#include <iostream>

using namespace std;

int main(){

    float a, b, valor;

    cout << "Numero: ";
    cin >> a;
    cout << "Expoente: ";
    cin >> b;

    valor = a;

    if(b==0){
        valor = 1;
    }
    else{
        for(b; b>1; b--){
            valor = a * valor;
        }
    }
    cout << endl<< valor;

    return 0;
}