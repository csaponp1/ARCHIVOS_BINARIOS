/*
CHRISTIAN SAPON'S COMPANY
SEGUNDA PROGRAMACIÓN
PROGRAMA QUE PIDE UNA CANTIDAD EN QUETZALES Y LA CONVIERTE A DOLARES, ASUMIENDO QUE LA UNIDAD CAMBIARIA ES UN DATO
DESCONOCIDO.
NOMBRE: Christian Fernando Sapón Pérez
*/
#include<iostream>


#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    float quetzales, dolares, tipo_de_cambio;
    cout<<"ingresa el valor en quetzales: \n";
    cin>>quetzales;
    cin.get();
    cout<<"ingresa el valor del tipo de cambio: \n";
    cin>>tipo_de_cambio;
    cin.get();
    dolares=quetzales/tipo_de_cambio;
    cout<<"valor de dolares"<<dolares<<"\n";
    cout<<"\n";
    system("pause");

    }
