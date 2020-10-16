#include <iostream>

using namespace std;

int main(){
    int num, cont, resul;
    cout << "Digite o valor pra descubrir a tabuada: ";
    cin >> num;
    cont = 0;

    while(cont < 10){
        cont++;
        resul = cont * num;
        cout << num << " x " << cont<< " = "<< resul<< endl;
    }

}