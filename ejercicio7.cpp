#include<iostream>
using namespace std;
int factorial(int x);
int main(){
	int m,n,r;
	cout<<"Ingrese un numero: "; cin>>m;
	cout<<"Ingrese otro numero: "; cin>>n;
	r=m-n;

    cout<<endl<<"---COMBINATORIA---"<<endl;

	double comb=(factorial(m))/((factorial(n))*(factorial(r)));
	cout<<"\nLa combinatoria de "<<m<<" sobre "<<n<<" es: "<<comb<<endl;
    
    cout<<"\n "<<"---VARIACION SIN REPETICION---"<<endl;
	double vari;
	
	vari=(factorial(m))/(factorial(r));
	cout<<"\nY su variacion sin repeticion es: "<<vari<<endl;
	return 0;
}

 int factorial(int x){
 	int i,fact;
 	fact=1;
 	for(i=1;i<=x;i++){
 		fact=fact*i;
 	}
 	return fact;
 } 
