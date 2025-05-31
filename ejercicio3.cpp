#include<iostream>
using namespace std;
int Fibonacci(int x);
int main(){
	int cant;	
	cout<<"Ingrese cantidad de terminos a generar: "; cin>>cant;	
	cout<<"\n---Serie de Fibonacci---"<<endl;
	Fibonacci(cant);				
	return 0;
}

int Fibonacci(int x){
	int num1,num2,num3,i,suma;
	suma=0;
	num1=0;
	num2=1;
	num3=1;
	for(i=1;i<=x;i++){
		num3=num1+num2;
		cout<<num3<<" ";
		num2=num1;
		num1=num3;
		suma=suma+num3;
	}
	cout<<endl<<"\nLa suma es: "<<suma;
	return num3; 
}