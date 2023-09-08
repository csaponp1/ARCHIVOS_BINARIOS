#include<iostream>
#include<stdio.h>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
    int numero;
    float resultado;
    cout<<"ingresa un número que quieras elevar al cuadrado"<<endl;
    cin>>numero;
    resultado = pow(numero,2);
    cout<<"el numero que ingresaste al cuadrado es:"<<endl;
    cout<<resultado;
    getch();
}