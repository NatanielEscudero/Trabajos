#include <iostream>
#include <string>

using namespace std;

int factorial(int numero);

int main(){
	
	int A[10],B[10];
	
	cout<<"vector A: ";
	
	for(int i=0;i<10;i++){
		
		A[i]=rand()%100;
		if(A[i]%2==0){
			
			B[i]=A[i];
			
		}
		cout<<A[i]<<" ";
		
	}
	cout<<endl<<"vector B: ";
	for(int i=0;i<10;i++){
	    if(B[i]>0){
		    cout<<B[i]<<" ";
	    }
	}
}