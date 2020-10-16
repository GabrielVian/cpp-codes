#include <iostream>

using namespace std;

int main(){
    int n1, n2, conta;
    cout << "Digite o menor numero: ";
    cin >> n1;
    cout << "Digite o maior numero: ";
    cin >> n2;
    conta = n1;
    if(n2 > n1){
        while(conta <= n2){
            cout << conta<< " ";
            conta++;  
        }
    }else{
        cout << "Algo nao esta certo!";
    }
    
}