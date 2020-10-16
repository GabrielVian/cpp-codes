#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
int i,a ;
i = 100;
a = 0;
do {
    if(i % 2 != 0){
        a = a+i;
    }

    i=i+1;

    } while(i < 300);
    cout<<a;
getch();
}