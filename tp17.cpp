#include <iostream>
#include <string>

using namespace std;

int factorial(int numero);

int main(){
	
	int numero;

    cout<<"ingresa un numero para saber su factorial"<<endl;
	cin>>numero;
	
	
	
	cout<<numero<<"!= "<<factorial(numero)<<endl;

	return 0;
}

int factorial(int numero){

	int factorial,aux=1;
	
 	for(int i=1;i<numero+1;i++){
 		
 		factorial=aux*i;
 		aux=factorial;
	 }
	 
	 return factorial;
}