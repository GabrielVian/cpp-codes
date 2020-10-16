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
        while(b>1){
            valor = a * valor;
            b--;
        }
    }
    cout << endl<< valor;

    return 0;
}