#include <iostream>

using namespace std;

int main(){
    int y, fat, i;
    fat = 1;
    i = 1;
    while(i <= 10) {
        fat*= i;
        y += (i / fat);
        i++;
    }
    cout <<"Y = " <<  y;
}