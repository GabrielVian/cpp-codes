#include <iostream>

using namespace std;
int main(){
    int num;
    char nome[20];
    int sx;
    int sm;
    int sf;
    float dp;
    num = 50;
    sm = 0;
    sf = 0;
    sx = 0;
    dp = 0;
    do{
        cout << "Digite o seu nome: ";
        cin >> nome;
        cout << "Digite seu sexo(masc/1)(fem/2): ";
        cin >> sx;
        if(sx == 1){
            sm = sm + 1;
        }else if(sx == 2){
            sf = sf + 1;
        }else{
            cout << "[Valor digitado nao corresponde a masc ou fem!!!!!]"<<endl;
            num ++;
        }
        num--;
    }while(num > 0);
    cout << "Existem "<< sf << " pessoas do sexo feminino";
    cout << ", e existem "<< sm << " pessoas do sexo masculino"<< endl;
    if(sf > sm){
        dp = (2 * sf)-(2 * sm);
    }else if (sf < sm){
        dp = (2 * sm)-(2 * sf);
    }else{
        dp = 0;
    }
    

    cout << "A diferenca percentual eh: "<< dp << "%";
}