#include<iostream>
using namespace std;
int euclides(int a, int b);
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

int euclides(int a, int b){
    int r;
    while(b != 0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

void MCDyMCM(int a, int b, int &mcd, int &mcm){
    mcd=euclides(a,b);
    mcm=(a*b)/mcd;
}