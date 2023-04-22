#include <iostream>
#include <string>

using namespace std;

string cambiaFrases3000(string frase);

int main(){
	
	string frase;
	
	cout<<"ingrese una frase para cambiar las a por b y eliminar la ultima letra"<<endl;
	cin>>frase;
	
	cout<<"su frase es: "<<cambiaFrases3000(frase)<<endl;
	
	return 0;
}

string cambiaFrases3000(string frase){
	
	string frasecambiada; int i=0;
	
	frasecambiada=frase;
	
	for(i;i<frase.size();i++){
		
		if(frase[i]=='a'){
			frasecambiada[i]='b';
		}
		
		if(frase[i]=='A'){
			frase[i]='B';
		}
		
		if(i==frase.size()){
		
		frasecambiada[i]=' ';
		
		}
		
	}
	
	frasecambiada.pop_back();
	
	return frasecambiada;
}