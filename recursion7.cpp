#include <iostream>
using namespace std;

int invertirNumero(int n, int acumulador = 0) {
    if (n == 0) {
        return acumulador;
    }

    return invertirNumero(n / 10, acumulador * 10 + (n % 10));
}

int main() {
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor ingrese un numero positivo." << endl;
    } else {
        int especular = invertirNumero(numero);
        cout << "La imagen especular de " << numero << " es: " << especular << endl;
    }

    return 0;
}