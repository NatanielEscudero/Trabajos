#include <cstdlib>
#include <iostream>
#include "Paciente.h" 
 
using namespace std;
 
int main(int argc, char** argv) {
 
    CPaciente paciente[4];
 
 
 	for(int i=0; i<4;i++){
 		
 		string nombre;
    	string direccion;
    	int telefono;
    	bool obrasocial;
    	bool alergias;
    	int aniovisita;
    	
    	cout<<"ingrese nombre: ";
    	cin>>nombre;
    	cout<<"ingrese direccion: ";
    	cin>>direccion;
    	cout<<"ingrese telefono: ";
    	cin>>telefono;
    	cout<<"ingrese si tiene obra social: ";
    	cin>>obrasocial;
    	cout<<"ingrese si tiene alergias: ";
    	cin>>alergias;
    	cout<<"ingrese su ultima visita: ";
    	cin>>aniovisita;
    	
 		paciente[i].SetPaciente(nombre,direccion,telofino,obrasocial,alergias,aniovisita);
 		system("cls");
 		
	}
 	
 	cout<<"Pacientes con obra social:"<<endl;
 	
 	for(int o=0; o<4;o++){
 		
 		bool obr=paciente[o].TieneObraSocial();
 		
 		
 		if(obr==true){
 			
 		paciente[o].MostrarPacienteObraSocial();	
 			
		}
 		
	}
	
	cout<<"Pacientes sin alergia"
	
	for(int p=0;p<4;p++){
		
		bool ale=paciente[o].TieneAlergias();
		
		if(ale==false){
			
			paciente[p].MostrarPaciente();
			
		}
	}
 	
    return 0;
}