#include<iostream>
using namespace std;

int numPrimo(int x);

int main(){
	int num1;
	cout<<"Ingrese un numero: "; cin>>num1;	
    if(num1>=1){
		cout<<"Es un numero positivo"<<endl; 
	}
	else{
		cout<<"No es un numero positivo";
		return 0;
	}
    
	if(numPrimo(num1)){
		cout<<"Es primo"<<endl;		
	}
	else{
		cout<<"No es primo"<<endl;
	}	
	return 0;
}

int numPrimo(int x){
	int divi,i;
	divi=0;
    for(i=1;i<=x;i++){
    	if(x%i==0){
    		divi++;
    	}
    }
    return (divi==2);
}