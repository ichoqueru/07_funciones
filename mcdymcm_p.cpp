#include<iostream>
using namespace std;
int euclides(int a, int b);
void MCDyMCM(int a,int b, int *mcd, int *mcm);
void mostrarDivi(int a, int b);
int main(){
    int cant,i;
	cout<<"Cuantos pares de numeros deseas ingresar? "; cin>>cant;
	for(i=1;i<=cant;i++){
    int x, y, rMCD, rMCM;
	cout<<endl<<"\nPar #"<<i<<endl;
    cout<<"Ingrese un numero: "; cin>>x;
	cout<<"Ingrese otro numero: "; cin>>y;
    if(x==0 || y==0){
		cout<<"\nLos numeros deben ser distintos de cero"<<endl;
		cout<<"Intente de nuevo";
		i--;
		continue;
	}

	MCDyMCM(x, y, &rMCD, &rMCM);
	cout<<"MCD: "<<rMCD<<endl;
	cout<<"MCM: "<<rMCM<<endl;

    mostrarDivi(x, y);	
    }
	return 0;
}

int euclides(int a, int b){
    int resi;
    while(b != 0){
        resi=a%b;
        a=b;
        b=resi;
    }
    return a;
}

void MCDyMCM(int a, int b, int *mcd, int *mcm){
	*mcd=euclides(a,b);	
	*mcm=(a*b)/(*mcd);
}

void mostrarDivi(int a, int b){
	cout<<"Sus divisores son: ";	
	for (int i=1; i<=min(a, b); i++) {
        if (a%i==0 && b%i==0) {
            cout<<i<<" ";            
        }
    }
}