#include <iostream>
using namespace std;

int main() {
	//declaracion de variables
	
	//realizar calculadora que me permita sumar dos numeros enteros
	int numero_a;
	int numero_b;
	int numero_total;
	
	cout<<"Ingresa tu numero a favorito"<<endl;
	cin>>numero_a;
	cout<<"Ingresa tu numero b favorito"<<endl;
	cin>>numero_b;
	
	//operacion
	numero_total = numero_a + numero_b;
	
	//Mostrar valores
	cout<<"El resultado de la suma es:"<<numero_total;
	
	system("pause");
	return 0;
}

