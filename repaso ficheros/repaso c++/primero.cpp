#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){
	const char* datos ="fichero.dat";
	FILE* archivo;
	archivo = fopen("wb",datos);
	
	if(!archivo){
		cout<<"no se puedo abrir el archivo"<<endl;
	}
}
