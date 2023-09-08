#include<iostream>
#include<stdio.h>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
	float descuento= 0.2;
	float compra = 0;
	float cobrar_en_caja = 0;
	cout<<"ingrese compra\n";
	cin>>compra;
	cobrar_en_caja = compra - (compra*descuento);
	cout<<"el monto a cobrarse en caja es:\n";
	cout<<cobrar_en_caja;
	system("pause");
	return 0;
}
