#include <iostream>
#include <string>

using namespace std;

char comprimirFrase(char frasedes);
char descomprimirFrase(char frasecom);

int main(){
	
	char frasedes[250],frasecom[250];
	
	cout<<"ingrese dos cadenas de caracteres para comprimirlas y descomprimirlas"<<endl;
	cin>>frasedes;
	cin>>frasecom;
	
	cout<<"las cadenas de caracteres procesadas son: "<<comprimirFrase(frasedes)<<descomprimirFrase(frasecom)<<endl;

	return 0;
}

char comprimirFrase(char frasedes){
	
	char frasecom; int i=0,contador;
	
	for(i;i<250;i++){
		
		if(frasedes[i]==frasedes[i+1]){
			
			contador++;
			
		}
		if(frasedes[i]!=frasedes[i+1]){
			
			frasecom[]=
			
		}
		
	}
	
	return frasecom:
}