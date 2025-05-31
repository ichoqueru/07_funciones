#include<iostream>
using namespace std;
int valorMCD(int x, int y, int& mcd);
int valorMCM(int num1, int num2, int mcd);
int main(){
    int num1,num2,mcd,mcm;
    cout<<"Ingrese un numero: "; cin>>num1;
    cout<<"Ingrese otro numero: "; cin>>num2;
    
    if(num1>0 && num2>0){
    valorMCD(num1, num2, mcd);
    cout<<"\nEl valor del MCD es: "<<mcd<<endl;

    mcm= valorMCM(num1, num2, mcd);
    cout<<"\nEl valor del MCM es: "<<mcm<<endl;
    }
    else{
        cout<<"\nLos valores ingresados deben ser positivos"<<endl;
    }
    return 0;
}

int valorMCD(int x, int y, int& mcd){
    int aux,resi;
    mcd=x;
	aux=y;
	do{
		resi=mcd%aux;
		mcd=aux;
		aux=resi;
	}while(resi!=0);
	return mcd;
}

int valorMCM(int num1, int num2, int mcd){
	return ((num1*num2)/mcd);	
}