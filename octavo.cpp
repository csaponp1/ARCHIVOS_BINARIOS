/*
Esto es un comentario, en dev c++
comentario multilinea
*/
//comentario unilinea, en dev c++

//utiliza los comentarios de manera responsable
//son muy utiles para comentar el codigo y saber su funcionamiento
#include<iostream> //libreria para la entrada y salida de datos
#include<stdio.h>
#include<conio.h>

using namespace std;

int main(){
	int salario;
	int opcion;
	float num_horas_trabajadas;
	float horas_extra;
	float desc = 0.0;
	float promedio;
	
 	cout<<"a continuacion se presentan los siguientes rangos salariales, escoge"<<endl;
 	cout<<"***********1. Q500.00 a Q1,000.00 *******************"<<endl;
 	cout<<"***********2. Q1,001.00 a Q3,000.00 *****************"<<endl;
 	cout<<"***********3. Q3,001.00 a Q4,000.00 *****************"<<endl;
 	cout<<"***********4. Q4,001.00 a Q7,500.00 *****************"<<endl;
 	cout<<"escoje"<<endl;
 	cin>>opcion;
 	
 	cout<<"Si escojiste la opcion equivocada deberas regresar a este menu"<<endl;
 	
 	switch(opcion){
 		case 1:
 			desc = 0;
 			promedio = 750;
			salario = promedio+(promedio*desc);
			cout<<"su salario es: Q"<<salario;
			cout<<"\taumento del: "<<desc*100;
 			break;
 		case 2:
 			desc = 0.1;
 			promedio = 2000.5;
			salario = promedio+(promedio*desc);
			cout<<"su salario es Q"<<salario;
			cout<<"\taumento del: "<<desc*100;
 			break;
 		case 3:
 			desc = 0.20;
 			promedio = 3050.5;
			salario = promedio+(promedio*desc);
			cout<<"su salario es: Q"<<salario;
			cout<<"\taumento del: "<<desc*100;
 			break;
 		case 4:
 			desc = 0.35;
 			promedio = 5750.5;
			salario = promedio+(promedio*desc);
			cout<<"su salario es: Q"<<salario;
			cout<<"\taumento del: "<<desc*100;
 			break;
 		default:
 			cout<<"opcion invalida :-( regresa al menu principal"<<endl;
 			break;
	 }
	
	getch();
	
}
