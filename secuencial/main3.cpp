#include<iostream>

using namespace std;

int main(){
    float cantidad;
    float aumento = 0.2;
    float cantidad_final;

    cout<<"ingresa sueldo total"<<endl;
    cin>>cantidad;

    //aumento
    cantidad_final = cantidad+(cantidad*aumento);
    cout<<"Sueldo final: "<<cantidad_final;
    system("pause");
}