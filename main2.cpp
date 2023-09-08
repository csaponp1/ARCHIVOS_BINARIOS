#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"ingresa una letra entre a, e, i, o , u"<<endl;
	cin>>letra;
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
		cout<<"la letra ingresada es una vocal!"<<endl;
	else
		cout<<"la letra no es vocal, es una consonante o simbolo"<<endl;
	system("pause");
}
