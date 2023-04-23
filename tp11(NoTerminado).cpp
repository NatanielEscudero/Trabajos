#include <iostream>
#include <string>

using namespace std;

string elCaminoAJapon(string nombre);

int main(){
	
	string nombre;

	cout<<"ingresa un nombre para japonizarlo"<<endl;
	cin>>nombre;

	cout<<"su nombre japonizado es: "<<"Konnichi wa, "<<elCaminoAJapon(nombre)<<"-san";

	return 0;
}

string elCaminoAJapon(string nombre){
	
	string nombrejaponizado;	int i=0;

	nombrejaponizado=nombre;
	
	for(i;i<nombre.size();i++){

		if(nombrejaponizado[i]!='a'||nombrejaponizado[i]!='e'||nombrejaponizado[i]!='i'||nombrejaponizado[i]!='o'||nombrejaponizado[i]!='u'||nombrejaponizado[i]!='n'){

		if(nombrejaponizado[i+1]!='a'||nombrejaponizado[i+1]!='e'||nombrejaponizado[i+1]!='i'||nombrejaponizado[i+1]!='o'||nombrejaponizado[i+1]!='u'||nombrejaponizado[i+1]!='n'){

		nombrejaponizado.insert(i,"u");

		}

		}



	}

	return nombrejaponizado;
}