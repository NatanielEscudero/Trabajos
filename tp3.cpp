#include <iostream>

using namespace std;

int CualEsElMayorNumero(int numa,int numb,int numc);

int main(){
	
	int numa,numb,numc;
	
	cout<<"ingrese tres numeros para compararlos y mostrar el mayor"<<endl;
	cin>>numa;
	cin>>numb;
	cin>>numc;
	
	cout<<"el numero mas alto es: "<<CualEsElMayorNumero(numa,numb,numc)<<endl;
	
}

int CualEsElMayorNumero(int numa,int numb,int numc){

	int mayornum;
	
	if(numa>numb && numa>numc){
		
		mayornum=numa;
		
	}
	
		if(numb>numa && numb>numc){
		
		mayornum=numb;
		
	}
	
		if(numc>numb && numc>numa){
		
		mayornum=numc;
		
	}
	
	return mayornum;
}