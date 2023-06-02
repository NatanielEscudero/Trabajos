#include <iostream>
#include <string>

using namespace std;

string separarConCaracteres(string caracter, string cadena);
int main(){
	
	string caracter,cadena;

    cout<<"ingresa una cadena de caracteres"<<endl;
	cin>>cadena;
	cout<<"ingresa un caracter"<<endl;
	cin>>caracter;
	
	
	cout<<"la cantidad de letras en su cadena de caracteres es: "<<separarConCaracteres(caracter,cadena)<<endl;

	return 0;
}

string separarConCaracteres(string caracter, string cadena){

    string nuevaCadena;

	for(int i=0;i<cadena.size();i++){
		
		if(cadena[i]==' '){
		
		nuevaCadena[i]=caracter;
		
		}
	}
	
	return nuevaCadena;
}