#include<iostream>
using namespace std;
double Suma(int x);
long long Factorial(int y);
int main(){
	int n;
	cout<<"Ingrese un valor: "; cin>>n;
	
	Suma(n);
	cout<<"\nLa suma es: "<<Suma(n);
	return 0;
}

double Suma(int x){
	double s;
	s=0;
	for(int i=1;i<=x;i++){
		s=s+((double)Factorial(i))/(2*i);
	}
	return s;
}

long long Factorial(int y){
	long long fact;
	fact=1;
	for(int i=2;i<=y;i++){
		fact=fact*i;
	}
	return fact;
}