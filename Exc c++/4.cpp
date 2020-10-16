#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
int i,a, maior, menor;
float e;
i = 1;
e = 0;
menor = a;
maior = 0;
do {
    cout<<"Digite um número:"<<endl;
    cin>>a;
    i=i+1;
    e = e+a;
    if (a< menor){
        menor = a;
    }
    else if (a > maior){
        maior = a;
    }



    } while(i <= 20);
    cout<<"Soma: "<<e<<endl;
    cout<<"Média: "<<e/20<<endl;
    cout<<"Maior: "<<maior<<endl;
    cout<<"Menor: "<<menor<<endl;
getch();
}