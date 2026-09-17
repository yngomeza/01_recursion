#include <iostream>
using namespace std;

int buscarRecursivo(const int arr[], int tam, int x, int indice = 0) {
    if (indice == tam) {
        return -1;
    }
    if (arr[indice] == x) {
        return indice;
    }
    return buscarRecursivo(arr, tam, x, indice + 1);
}

int main() {
    int n;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;

    int numeros[n];

    cout << "Ingrese " << n << " elementos enteros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> numeros[i];
    }

    int x;
    cout << "\nIngrese el valor x a buscar: ";
    cin >> x;

    int pos = buscarRecursivo(numeros, n, x);

    if (pos != -1) {
        cout << "El valor " << x << " se encuentra en el indice: " << pos << endl;
    } else {
        cout << "El valor " << x << " no se encuentra en el arreglo." << endl;
    }

    return 0;
}