#include<iostream>
#include<conio.h>


void modificarValor(int *puntero){
	*puntero =99;	
}

using namespace std;
int main(){
	int numero=42;
	int *puntero = &numero;
	
	cout<<"Valor antes de la funcion"<<puntero<<" Numero: "<<numero<<endl;
	modificarValor(puntero);
	cout<<"Valor despues de la funcion"<<puntero<<" Numero: "<<numero<<endl;
	
	
	return 0;
}
