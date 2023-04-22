#include <iostream>
#include <string>

using namespace std;

int contadorDePuntos(string texto);

int main(){
	
	string texto;
	
	cout<<"ingrese una texto para que esta sea puntuada"<<endl;
	cin>>texto;
	
	cout<<"la puntuacion de su texto es: "<<contadorDePuntos(texto)<<endl;
	
	return 0;
}

int contadorDePuntos(string texto){
	
	int puntos=0,i=0;
	
	for(i;i<texto.size();i++){
		
		if(texto[i]=='a'||texto[i]=='e'){
			
			puntos++;
			
		}
		
		if(texto[i]=='o'||texto[i]=='s'){
			
			puntos=puntos+2;
			
		}
		
		if(texto[i]=='d'||texto[i]=='i'||texto[i]=='n'||texto[i]=='r'){
			
			puntos=puntos+3;
			
		}
		
		if(texto[i]=='c'||texto[i]=='l'||texto[i]=='t'||texto[i]=='u'){
			
			puntos=puntos+4;
			
		}
		
		if(texto[i]=='m'||texto[i]=='p'){
			
			puntos=puntos+5;
			
		}
		
		if(texto[i]=='b'||texto[i]=='f'||texto[i]=='g'||texto[i]=='h'||texto[i]=='j'||texto[i]=='q'||texto[i]=='v'||texto[i]=='x'||texto[i]=='y'||texto[i]=='z'){
			
			puntos=puntos+6;
			
		}
		
		if(texto[i]=='k'||texto[i]=='w'){
			
			puntos=puntos+7;
			
		}
		
	}
	
	return puntos;
}