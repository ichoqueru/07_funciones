#include<iostream>
using namespace std;
void MCDyMCM(int a,int b, int *mcd, int *mcm);
int main(){
    int cant,i;
	cout<<"Cuantos pares de numeros deseas ingresar? "; cin>>cant;
	for(i=1;i<=cant;i++){
    int x, y, rMCD, rMCM;
	cout<<"\nPar #"<<i<<endl;
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
    }
	return 0;
}

void MCDyMCM(int a, int b, int *mcd, int *mcm){
	int i;
	i=1;
	*mcd=1;
	while(i<=a && i<=b){
		if(a%i==0 && b%i==0){
			*mcd=i;
		}
		i=i+1;
	}
	*mcm=(a*b)/(*mcd);
}