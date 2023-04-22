#include <iostream>

using namespace std;

float ConvertirDolarAPeso(float cantidad);

int main(){
	
	float cantidad;
	
	cout<<"ingrese la cantidad de dolares a convertir a pesos"<<endl;
	cin>>cantidad;
	
	cout<<"su cantidad de dolares es: "<<ConvertirDolarAPeso(cantidad)<<endl;
	
	return 0;
}

float ConvertirDolarAPeso(float cantidad){
	
	float cantidaddepesos;
	
	cantidaddepesos=cantidad*331.37;
	
	return cantidaddepesos;
}