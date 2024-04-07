// Axel Alvarez
// UMG BOCA DEL MONTE
#include <iostream>
using namespace std;
int suma(int num1, int num2, int num3);
void suma(int &num1, int &num2);

main(){
	int a=10, b=20;
	
	suma(a,b);
	
	cout<<"a: " <<a<<endl;
	cout<<"b: " <<b<<endl;
	
	system("pause");
}


// funcion que suma dos valores
int suma(int num1, int num2, int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return num1+num2+num3;
}

// metodo
// la & le agrega el valor que estamos sumando :)
void suma(int &num1, int &num2){
	int resultado = 0;
	num1+=1; // 11
	num2+=1; //21
	resultado = num1+num2; //32
	cout<<resultado<<endl;
}
