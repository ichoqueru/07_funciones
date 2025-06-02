#include<iostream>
using namespace std;
int sumaDivisores(int x);
int main(){
	int num,suma;
	cout<<"Ingrese un numero: "; cin>>num;
	
	suma=sumaDivisores(num);
	
	if(suma==num){
		cout<<"\n "<<num<<" es un numero perfecto";
	}
	else{
		cout<<"\n "<<num<<" no es un numero perfecto";
	}
	
	return 0;
}

int sumaDivisores(int x){
	int suma,i;
	suma=0;
	for(i=1;i<x;i++){
		if(x%i==0){
			suma=suma+i;
		}
	}
	return suma;
}