#include <iostream>
#include <string>

using namespace std;

int devolverMinimaCantidadDeLetras(string palabra);

int main(){
	
	string palabra;
	
	cout<<"ingrese una palabra para contar la cantidad de letras necesarias para convertirla en palindromo"<<endl;
	cin>>palabra;
	
	cout<<"la minima cantidad de palabras es: "<<devolverMinimaCantidadDeLetras(palabra)<<endl;
	
	return 0;
}

int devolverMinimaCantidadDeLetras(string palabra){
	
	int contador;
	
	contador=palabra.size()-1;
	
	return contador;
}