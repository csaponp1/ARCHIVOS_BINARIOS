
/*
UNIVERSIDAD MARIANO GALVEZ DE GUATEMALA
ALUMNO: CHRISTIAN FERNANDO SAPON PEREZ
CARNET: 1290-21-16654
FACULTAD DE INGENIERIA EN SISTEMAS
*/
#include <iostream>
#include <stdio.h>  
#include <string.h> 
#include<conio.h>
using namespace std;
const char *temp = "temp.dat";//nombre del archivo binario
const char *nombre_archivo = "archivo.dat";//nombre del archivo binario
struct Estudiante{
	int codigo;
	char nombre[50];
	char apellido[50];
	char direccion[50];
	int telefono;
};
void crear();
void leer();
void actualizar();
void eliminar();
void consultar();
int consultar1(int &cod);
main(){
	
	int op;
	bool ciclo = true;

	do
	{
	cout<<"-------------------BIENVENIDO AL COLEGIO LA BENDICION-----------------------"<<endl;
	cout<<"1. Crear estudiante"<<endl;
	cout<<"2. Leer registros"<<endl;
	cout<<"3. Modificar Registros"<<endl;
	cout<<"4. Borrar Estudiante"<<endl;
	cout<<"5. Consultar "<<endl;
	cout<<"6. Salir"<<endl;
	cout<<"ELIJA...!!"<<endl;
	cin>>op;
	
		switch(op){
			
			case 1:
				crear();
				break;

			case 2:
				leer(); 
				break;

			case 3:
				actualizar();
				break;

			case 4:
				eliminar();
				break;

			case 5:
				consultar();
				break;

			case 6:
				ciclo = false;
				break;

			default:
				cout<<"opcion invalida. Verifique!"<<endl;
		}
	} while (ciclo!=0);
	

	
system("pause");
}


void crear(){
	leer();
	FILE *archivo = fopen(nombre_archivo,"ab");
	char continuar;
	int id=0,cod=0;
	Estudiante estudiante;
	string nombre,apellido,direccion;
	
	do{
		fflush(stdin);
			
			
			cout<<"Ingrese Codigo:";
			cin>>cod;
			estudiante.codigo=consultar1(cod);
			cin.ignore();
			
			cout<<"Ingrese Nombres:";
			getline(cin,nombre);
			strcpy(estudiante.nombre,nombre.c_str());
			
			cout<<"Ingrese Apellidos:";
			getline(cin,apellido);
			strcpy(estudiante.apellido,apellido.c_str());

			cout<<"Ingrese Direccion: ";
			getline(cin,direccion);
			strcpy(estudiante.direccion,direccion.c_str());
			
			cout<<"Ingrese Telefono:";
			cin>>estudiante.telefono;
			cin.ignore();
			
			fwrite(&estudiante,sizeof(Estudiante),1,archivo);
		
		cout<<"Desea Agregar otro Estudiante (s/n):";
		cin>>continuar;
	}while(continuar=='s' || continuar=='S');
	fclose(archivo);

	leer();
	
	}

void leer(){
	system("cls");
	FILE* archivo = fopen(nombre_archivo,"rb");
	if(!archivo){
		archivo = fopen(nombre_archivo,"w+b");
	}
	Estudiante estudiante;
	int id=0;
	fread(&estudiante,sizeof(Estudiante),1,archivo);
	cout<<"id"<<"|"<<"Codigo"<<"|"<<"Nombres"<<"|"<<"Apellidos"<<"|"<<"Direccion"<<"|"<<"Telefono"<<endl;
	do{
		cout<<"_____________________________________________________________________"<<endl;
		
cout<<id<<" | "<<estudiante.codigo<<" | "<<estudiante.nombre<<" | "<<estudiante.apellido<<" | "<<estudiante.direccion<<" | "<<estudiante.telefono<<endl;
		fread(&estudiante,sizeof(Estudiante),1,archivo);
		id+=1;
	}while(feof(archivo)==0);
	fclose(archivo);
}

void actualizar(){
	FILE* archivo = fopen(nombre_archivo,"r+b");
	int id;
	Estudiante estudiante;
	string nombre,apellido,direccion;
	cout<<"Ingrese el Id a Modificar:";
	cin>>id;
	fseek(archivo,id *sizeof(Estudiante),SEEK_SET);
			cout<<"Ingrese Codigo:";
			cin>>estudiante.codigo;
			cin.ignore();
			
			cout<<"Ingrese Nombres:";
			getline(cin,nombre);
			strcpy(estudiante.nombre,nombre.c_str());
			cout<<"Ingrese Apellidos:";
			getline(cin,apellido);
			strcpy(estudiante.apellido,apellido.c_str());
			cout<<"Ingrese direccion: ";
			getline(cin,direccion);
			strcpy(estudiante.direccion,direccion.c_str());
			
			cout<<"Ingrese Telefono:";
			cin>>estudiante.telefono;
			cin.ignore();
			fwrite(&estudiante,sizeof(Estudiante),1,archivo);
		fclose(archivo);
	leer();
	
}

void eliminar(){

	int id = 0,cod=0;
	Estudiante estudiante;
	FILE *archivo = fopen(nombre_archivo,"rb+");
	FILE *temporal = fopen(temp,"wb");

	if(!archivo){
		archivo = fopen(nombre_archivo, "wb");//validamos la existencia del archivo
	}

	consultar();
	cout<<"\nDigite el codigo a eliminar/ingrese 0 si no desea eliminar"<<endl;
	cin>>cod;


	fread(&estudiante,sizeof(Estudiante),1,archivo);
	do
	{
		if(estudiante.codigo!=cod){

				fwrite(&estudiante,sizeof(Estudiante),1,temporal);
			}
			fread(&estudiante,sizeof(Estudiante),1,archivo);
		
	} while (feof(archivo)==0);
	fclose(archivo);
	fclose(temporal);
	remove(nombre_archivo);
	rename(temp,nombre_archivo);
	cout<<"\nRegistro eliminado!!!!!!"<<endl;
	getch();
}

void consultar(){

	int indice=0, id=0, cod=0;

	system("cls");
	FILE* archivo = fopen(nombre_archivo,"rb");
	if(!archivo){
		archivo = fopen(nombre_archivo,"w+b");
	}
	Estudiante estudiante;
	
	cout<<"ingrese codigo : "<<endl;
	cin>>cod;
	fread(&estudiante,sizeof(Estudiante),1,archivo);
		do
		{
			if(estudiante.codigo==cod){
				cout<<"id"<<"|"<<"Codigo"<<"|"<<"Nombre"<<"|"<<"Apellidos"<<"|"<<"Direccion"<<"|"<<"Telefono"<<endl;
				cout<<"_________________________________________________________________________________________________"<<endl;
				cout<<id<<" | "<<estudiante.codigo<<" | "<<estudiante.nombre<<" | "<<estudiante.apellido<<" | "<<estudiante.direccion<<" | "<<estudiante.telefono<<endl;
			}
			fread(&estudiante,sizeof(Estudiante),1,archivo);
			id+=1;
			
		} while (feof(archivo)==0);
	fclose(archivo);
		

}

int consultar1(int &cod){

	FILE* archivo = fopen(nombre_archivo,"rb");
	if(!archivo){
		archivo = fopen(nombre_archivo,"w+b");
	}
	Estudiante estudiante;
	
	
	fread(&estudiante,sizeof(Estudiante),1,archivo);
		do
		{
			do
			{
				
				if(estudiante.codigo==cod){
				cout<<"Codigo ya existe!"<<endl;
				cout<<"ingrese codigo"<<endl;
				cin>>cod;
				fseek(archivo,sizeof(Estudiante),SEEK_SET);
			} 
			
			
			}while (estudiante.codigo==cod);
			
			fread(&estudiante,sizeof(Estudiante),1,archivo);
		} while (feof(archivo)==0);

	fclose(archivo);
	return cod;
		

}

