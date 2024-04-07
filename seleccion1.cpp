// Axel Alvarez
// UMG BOCA DEL MONTE
#include <iostream>
using namespace std;

struct Estudiante{
	int codigo[4];
    string nombre[4];
	int nota[4];
};

// estructuras struct (una forma de agrupar varias variables relacionadas
// en un solo lugar

main(){
	Estudiante estudiante;
	
	for (int i=0; i<4; i++){
		cout<<"_________"<<endl;
	cout<<"Ingrese Codigo: ";
	cin>>estudiante.codigo[i];
	cin.ignore();
	
	cout<<"ingrese Nombre Completo: ";
	getline(cin, estudiante.nombre[i]);
	
	cout<<"Ingrese Nota: ";
	cin>>estudiante.nota[i];
	system("pause");
	
	}
	// FOR PARA ALMACENAR LA INFORMACION
		for (int i=0; i<4; i++){
			
		cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
	    cout<<"Nombre Completo: "<<estudiante.nombre[i]<<endl;
    	cout<<"Nota: "<<estudiante.nota[i]<<endl;
 	}

	
	
	
}
