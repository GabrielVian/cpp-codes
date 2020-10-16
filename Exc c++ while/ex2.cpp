#include <iostream>
using namespace std;
int main(){
    int fat, n;
    cout << "Digite um valor: ";cin >> n;
    fat = 1;
    while( n > 1){
        fat = fat * n;
        n--;
    }
    cout << "O valor fatorial e "<<fat<< endl;
}