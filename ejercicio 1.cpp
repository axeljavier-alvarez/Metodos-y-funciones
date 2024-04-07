// Axel Alvarez
// UMG BOCA DEL MONTE
#include <iostream>
using namespace std;

// metodos y funciones = ejecutan una porcion de codigo N
// cantidad de veces seguidas
// metodo = no retorna un tipo de dato
// funcion retorna un tipo de dato determinado
// 80 lineas de codigo en 10 lgares distintos = 800 lineas
// de las cuales 80 son iguales
// crean una funcion o un metodo = y lo manda a llamar 10 veces


// funcion que suma dos valores
int suma(int num1, int num2){
	int resultado = 0;
	resultado = num1+num2;
	return num1+num2;
}

int suma(int num1, int num2, int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return num1+num2+num3;
}


main(){
	
	cout<<suma(10, 20)<<endl;
	cout<<suma(10, 20, 30)<<endl;
	system("pause");
}
