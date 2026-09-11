#include <iostream>
using namespace std;

int sumarArreglo(const int arr[], int n){
	if(n <= 0){
		
		return 0;
	}
	
	return arr[n - 1] + sumarArreglo(arr, n - 1);
}

int main(){
	int tamano;
	
	cout << "Ingrese la cantidad de elementos que tendra el arreglo: ";
	cin >> tamano;
	
	int numeros[tamano];
	
	for(int i = 0; i < tamano; i++){
		cout << "Ingrese el elemento [" << i << "]: ";
		cin >> numeros[i];
	}
	
	int suma = sumarArreglo(numeros, tamano);
	
	cout <<"\nLa suma total de los elementos es: " << suma << endl;
	
	return 0;
}