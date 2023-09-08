#include<iostream>//libreria estandar
#include<stdio.h>// libreria que incluye los metodos y procedimientos de archivos
#include<conio.h> 

using namespace std;

struct estudiante{
	string nombre;
	string apellido;
	int edad;
};

int main(){
	estudiante Estudiante;
	Estudiante.nombre = "Vanessa";
	Estudiante.apellido=" Sequen Jop";
	Estudiante.edad = 17;
	
	FILE *archivo;
	archivo = fopen("datos.dat","wb");
	
	
	
	return 0;
	getch();
}

