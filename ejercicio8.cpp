#include<iostream>
using namespace std;
int MCD_y_MCM(int x, int y, int& mcd, int& mcm);
int main(){
    int num1,num2,mcd,mcm;
    cout<<"Ingrese un numero: "; cin>>num1;
    cout<<"Ingrese otro numero: "; cin>>num2;

    MCD_y_MCM(num1, num2, mcd, mcm);
    cout<<"\nEl valor del MCD es: "<<mcd<<endl;
    cout<<"\nEl valor del MCM es: "<<mcm<<endl;
    return 0;
}

int MCD_y_MCM(int x, int y, int& mcd, int& mcm){
    int aux,resi;
    mcd=x;
	aux=y;
	do{
		resi=mcd%aux;
		mcd=aux;
		aux=resi;
	}while(resi!=0);
    mcm=x*y/mcd;
	return mcd, mcm;
}
