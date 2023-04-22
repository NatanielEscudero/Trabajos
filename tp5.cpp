#include <iostream>

using namespace std;

float calcularFahrenheit(int celsius);

int main(){
	
	int celsius;
	
	cout<<"ingrese la cantidad de celcius que quiere convertir a fahrenheit"<<endl;
	cin>>celsius;
	
	cout<<"su cantidad de fahrenheit es: "<<calcularFahrenheit(celsius)<<endl;
	
	return 0;
}

float calcularFahrenheit(int celsius){
	
	float fahrenheit;
	
	fahrenheit=(1.8*celsius)+32;
	
	return fahrenheit;
}