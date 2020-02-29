//calculadora v2

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int n1, n2, Op,suma = 0, resta = 0, m = 0, d = 0;
			
	cout<<"Digite 2 numeros: "; cin>>n1>>n2;
	
	suma	= n1 + n2;
	resta	= n1 - n2;
	m	= n1 * n2;
	d	= n1 / n2;
	
	cout<<"Que operacion desea realizar? "; 
	cout<<"\n1)Suma"; 
	cout<<"\n2)Resta"; 
	cout<<"\n3)Multiplicacion"; 
	cout<<"\n4)Division" <<endl; cin>>Op; 
	
	switch(Op){
		
		
		case 1: cout<<"\nLa suma es: "<<suma; break;
		case 2: cout<<"\nLa resta es: "<<resta; break;
		case 3: cout<<"\nLa multiplicacion es: "<<m; break;
		case 4: cout<<"\nLa division es: "<<d; break;
		
		}
		
		cout<<"\nPresione una tecla para continuar...";
		getch();
		
	return 0;
}
