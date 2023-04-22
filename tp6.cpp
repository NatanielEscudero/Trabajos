#include <iostream>
#include <string>

using namespace std;

string calcularDDD(int codigo);

int main(){
	
	int codigo;
	
	cout<<"ingrese su DDD"<<endl;
	cin>>codigo;
	
	cout<<"su destino es: "<<calcularDDD(codigo)<<endl;
	
	return 0;
}

string calcularDDD(int codigo){
	
	string destino="DDD NO ENCONTRADO";
	
	if(codigo==61){
		
		destino="Brasilia";
		
	}
	
	if(codigo==71){
		
		destino="Salvador";
		
	}
	
	if(codigo==11){
		
		destino="Sao Paulo";
		
	}
	
	if(codigo==21){
		
		destino="Rio De Janeiro";
		
	}
	
	if(codigo==32){
		
		destino="Juiz De Fora";
		
	}
	
	if(codigo==19){
		
		destino="Campinas";
		
	}
	
	if(codigo==27){
		
		destino="Vitoria";
		
	}
	
	if(codigo==31){
		
		destino="Belo Horizonte";
		
	}
	
	return destino;
}