#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){
	FILE* archivo;
	string datos ="fichero.dat";
	const char* nombre = datos.c_str();
	
	archivo = fopen(nombre,"w");
	
	if(!archivo){
		cout<<"no se puedo abrir el archivo"<<endl;
	}
	
}
