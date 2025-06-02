#include<iostream>
#include<cmath>
using namespace std;
int sumaDivisores(int x);
bool enteroPositivo(double x){
	if(isfinite(x) && x>0 && floor(x)==x){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int num1,num2,suma1,suma2;
	cout<<"Ingrese un numero: "; cin>>num1;
	cout<<"Ingrese otro numero: "; cin>>num2;
	
    if(enteroPositivo(num1) && enteroPositivo(num2)){
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
    else{
        cout<<"\nAl menos uno de los numeros no es un entero o positivo";
		return 0;
    }
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