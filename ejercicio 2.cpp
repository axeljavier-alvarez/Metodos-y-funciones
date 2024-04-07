// Axel Alvarez
// UMG BOCA DEL MONTE
#include <iostream>
using namespace std;



// funcion que suma dos valores
int suma(int num1, int num2, int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return num1+num2+num3;
}

// metodo
void suma(int num1, int num2){
	int resultado = 0;
	resultado = num1+num2;
	cout<<resultado<<endl;
}


main(){
	
	// funcion
	// cout<<suma(10, 20)<<endl;
	
	// metodo
	suma( 20, 30);
	
	system("pause");
}
