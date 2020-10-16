#include <iostream>
using namespace std;
int main(){
    int fat, n;
    cout << "Digite um valor: ";cin >> n;
    for(fat = 1; n > 1; n--){
        fat = fat * n;
    }
    cout << "O valor fatorial e "<<fat<< endl;
}