#include <iostream>
#include <string>

using namespace std;

int contarLetraA(string frase);

int main(){
	
	string frase;
	
	cout<<"ingrese una frase para contar cuantas letras A hay"<<endl;
	cin>>frase;
	
	cout<<"la cantidad de letras A es: "<<contarLetraA(frase)<<endl;
	
	return 0;
}

int contarLetraA(string frase){
	
	int contador,i=0;
	
	for(i;i<frase.size();i++){
		
		if(frase[i]=='a'||frase[i]=='A'){
			
			contador++;
			
		}
		
	}
	
	return contador;
}