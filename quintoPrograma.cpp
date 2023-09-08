/*Entrada de datos por consola, pedirlos al usuario*/
#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"ingresa la edad:";
	cin>>edad;
	cout<<"\n";
	
	cout<<"ingresa el sexo: ";
	cin>>sexo;
	cout<<"\n";
	
	cout<<"ingresa la altura en metros: ";
	cin>>altura;
	cout<<"\n";
	
	cout<<"\nedad: "<<edad<<endl;
	cout<<"sexo: "<<sexo<<endl;
	cout<<"altura: "<<altura<<endl;
	
	return 0;
}
