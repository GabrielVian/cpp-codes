#include <iostream>

using namespace std;

int main(){
    int x, n, y, i, c;
    cout << "Diga o valor de X: "; cin >> x;
    cout << "Diga o valor de N: "; cin >> n;
    c = 1;
    i = 2;
    y += x;
    while(i <= n){
        y += c % 2 == 0? i * x :  -i * x;
        ++c;
        i += 2;
    }

    cout << y;

}