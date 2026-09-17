#include <iostream>
using namespace std;

void imprimirBinario(int n) {
    if (n > 1) {
        imprimirBinario(n / 2);
    }
    cout << n % 2;
}

int main() {
    int numero;
    cout << "Ingrese un numero entero positivo en base 10: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor ingrese un numero positivo." << endl;
    } else if (numero == 0) {
        cout << "El equivalente en base 2 es: 0" << endl;
    } else {
        cout << "El equivalente en base 2 es: ";
        imprimirBinario(numero);
        cout << endl;
    }

    return 0;
}