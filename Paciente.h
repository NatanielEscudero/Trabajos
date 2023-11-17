#ifndef Paciente_H
#define	Paciente_H
#include <string>
#include <iostream>
 
using namespace std;
 
class CPaciente {
public:
	
  	CPaciente();
    void setPaciente(string N, string D, int T, bool O, bool Al,int An);
    bool TieneObraSocial();
    bool TieneAlergias();
    void MostrarPaciente();
    void MostrarPacienteObraSocial();
    
private:
    string nombre;
    string direccion;
    int telefono;
    bool obrasocial;
    bool alergias;
    int aniovisita;
};

CPaciente::CPaciente(){
	
}

void CPaciente::SetPaciente(string N, string D, int T, bool O, bool Al,int An){
	
	nombre=N;
	direcion=D;
	telefono=T;
	obrasocial=O;
	alergias=Al;
	aniovisita=An;
	
}

bool CPaciente::TieneObraSocial(){
	
	return obrasocial;
	
}

bool Cpaciente::TieneAlergias(){
	
	return alergias
	
}
void Cpaciente::MostrarPaciente(){
	
	cout<<"Nombre: "<<nombre<<endl;	
	cout<<"Direccion: "<<direccion<<endl;
	cout<<"Telefono: "<<telefono<<endl;
	cout<<"¿Tiene Obra social?: "<<obrasocial<<endl;
	cout<<"¿Tiene Alergias?: "<<alergias<<endl;
	cout<<"Año Ultima visita: "<<aniovisita<<endl;
	
}
void Cpaciente::MostrarPacienteObraSocial(){
	
	cout<<"Nombre: "<<nombre<<endl;	
	cout<<"Telefono: "<<telefono<<endl;

}