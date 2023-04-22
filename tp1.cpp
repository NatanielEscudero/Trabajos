#include <iostream>

using namespace std;

bool esmultiplode3 (int numero);

int main(){
	
	int numero;
	
	cout<<"ingrese un numero para corroborar si es un multiplo de tres"<<endl;
	cin>>numero;
	
	if(esmultiplode3(numero)==true){
		
		cout<<"su numero es multiplo de 3"<<endl;
		
	}
	else{
		
		cout<<"su numero no es un multiplo de 3"<<endl;
		
	}
	
	return 0;
}

bool esmultiplode3 (int numero){
	
	bool esmultiplo=false;
	
	if(numero%9==0){
		
		esmultiplo=true;
		
	}
	
	return esmultiplo;
}