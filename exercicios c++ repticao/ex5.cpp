#include <iostream>

using namespace std;

int main(){

    int i, checar;
    float soma, valor;

    for(i = 2; i<1001; i += 2){
        checar = i % 2;
        if(checar==0){
            soma = i + soma;
        }
    }

    cout << soma;

    return 0;
}