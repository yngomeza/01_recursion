#include <iostream>
#include <algorithm>
using namespace std;

int obtenerMaximo(const int arr[], int tam) {
    if (tam == 1) {
        return arr[0];
	}
    return max(arr[tam - 1], obtenerMaximo(arr, tam - 1));
}

int main(){
    int n;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;

    if (n <= 0) {
        cout << "El tamano debe ser mayor a 0." << endl;
        return 0;
    }

    int numeros[n];

    cout << "Ingrese " << n << " elementos enteros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> numeros[i];
    }

    int maximo = obtenerMaximo(numeros, n);

    cout << "\nEl maximo elemento del arreglo es: " << maximo << endl;

    return 0;
}