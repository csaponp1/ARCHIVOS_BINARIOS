#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero;
	cout<<"ingresa una numero negativo"<<endl;
	cin>>numero;
	if(numero <0)
		numero = numero*-1;
	cout<<"el numero ingresado es: "<<numero;
	getch();
}
