#include <iostream>

using namespace std;

int main(){
    int num, cont;
    cout << "Digite um numero: ";
    cin >> num;
    cont = 0;
    while(cont < num){
        cont = cont + 2;
        cout << " 1 ";
        cout << cont;
    }

}