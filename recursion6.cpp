#include <iostream>
using namespace std;

int calcularSerie(int n) {
    if (n == 1) return 4;
    if (n == 2) return 6;

    return calcularSerie(n - 1) + calcularSerie(n - 2);
}

int main() {
    int n;
    cout << "Ingrese la posicion (n) del termino a calcular: ";
    cin >> n;

    if (n <= 0) {
        cout << "La posicion debe ser mayor a 0." << endl;
    } else {
        int resultado = calcularSerie(n);
        cout << "El termino " << n << " de la serie es: " << resultado << endl;
    }

    return 0;
}