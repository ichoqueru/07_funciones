#include<iostream>
using namespace std;

void MCDyMCM(int a, int b, int &mcd, int &mcm);

int main(){
    int x=18, y=24;
    int rMCD, rMCM;
    MCDyMCM(x, y, rMCD, rMCM);
    cout<<"MCD: "<<rMCD<<endl;
    cout<<"MCM: "<<rMCM<<endl;
    return 0;
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