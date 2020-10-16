#include <iostream>

using namespace std;

int main(){
    int num, cont;
    cout << "Digite um valor: ";
    cin >> num;
    cont = 1;
    while(cont <= num){
        cout << cont << ", "; 
        cont = cont *2;
    }
}