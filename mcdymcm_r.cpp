#include<iostream>
using namespace std;

void MCDyMCM(int a, int b, int &mcd, int &mcm);

int main(){
    int x, y;
    cout<<"Ingrese un numero: "; cin>>x;
    cout<<"Ingrese otro numero: "; cin>>y;
    if(x==0 || y==0){
    	cout<<"\nLos numeros deben ser diferentes de cero";
    	return 0;
    }
    else{
    int rMCD, rMCM;
    MCDyMCM(x, y, rMCD, rMCM);
    cout<<"MCD: "<<rMCD<<endl;
    cout<<"MCM: "<<rMCM<<endl;
    return 0;
    }
}

void MCDyMCM(int a, int b, int &mcd, int &mcm){
    int aux,resi;
    mcd=a;
    aux=b;
    do{
    	resi=mcd%aux;
    	mcd=aux;
    	aux=resi;
    }while(resi!=0);
    mcm=(a*b)/mcd;
}