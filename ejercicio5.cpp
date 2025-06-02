#include<iostream>
using namespace std;
int sumaDivisores(int x);
int main(){
	int num1,num2,suma1,suma2;
	cout<<"Ingrese un numero: "; cin>>num1;
	cout<<"Ingrese otro numero: "; cin>>num2;
	
	cout<<"\nLos divisores de "<<num1<<" son: "; suma1=sumaDivisores(num1);
	cout<<"\nLos divisores de "<<num2<<" son: "; suma2=sumaDivisores(num2);
	
	cout<<"\nLa suma de los divisores de "<<num1<<" es: "<<suma1<<endl;
	cout<<"La suma de los divisores de "<<num2<<" es: "<<suma2<<endl;
	
	if(suma1==suma2 && suma2==suma1){
		cout<<"\n "<<num1<<" y "<<num2<<" son numeros amigos"<<endl;
	}
	else{
		cout<<"\n "<<num1<<" y "<<num2<<" no son numeros amigos"<<endl;
	}	
	return 0;
}

int sumaDivisores(int x){
	int i,suma;
	suma=0;
	for(i=1;i<=x;i++){
		if(x%i==0){
			cout<<i<<" ";
			suma=suma+i;
		}		
	}
	return suma;
}