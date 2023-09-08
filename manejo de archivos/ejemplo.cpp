#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
	const char* nom_archivo="datos.dat";
	FILE*archivo;
	
	archivo = fopen(nom_archivo,"wb");
	
	if(!archivo){
		cout<<"no se puede acceder al archivo!!"<<endl;
	}
	
	
		
	
	
}
