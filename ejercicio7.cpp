#include<iostream>
using namespace std;
int factorial(int x);
int main(){
	int m,n,r;
	cout<<"---COMBINATORIA---"<<endl;
	cout<<"Ingrese un numero: "; cin>>m;
	cout<<"Ingrese otro numero: "; cin>>n;
	r=m-n;

	double comb=(factorial(m))/((factorial(n))*(factorial(r)));
	cout<<"\nLa combinatoria de "<<m<<" sobre "<<n<<" es: "<<comb<<endl;
    
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
