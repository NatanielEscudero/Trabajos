#include <iostream>

using namespace std;

float calcularSalarioConAumento(int salario);

int main(){
	
	int salario;
	
	cout<<"ingrese su salario"<<endl;
	cin>>salario;
	
	cout<<"su salario es: "<<calcularSalarioConAumento(salario)<<endl;
	
	return 0;
}

float calcularSalarioConAumento(int salario){
	
	float salarioaumentado;
	
	if(salario<400){
		
		salarioaumentado=salario+(salario*15/100);
		
	}
	
	if(salario>400 && salario<800){
		
		salarioaumentado=salario+(salario*12/100);
		
	}
	
	if(salario>800 && salario<1200){
		
		salarioaumentado=salario+(salario*10/100);
		
	}
	
	if(salario>1200 && salario<2000){
		
		salarioaumentado=salario+(salario*7/100);
		
	}
	
	if(salario>2000){
		
		salarioaumentado=salario+(salario*4/100);
		
	}
	
	return salarioaumentado;
}