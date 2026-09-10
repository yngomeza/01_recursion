#include <iostream>
using namespace std;
	
double potencia(double x, int n){
	if(n == 0){
			
		return 1;
	}
		
	return(x * potencia(x, n - 1));
}
	
int main(){	

	double base;
	int exponente;
	
	cout << "Ingrese la base: ";
	cin >> base;
	
	cout << "Ingrese el exponente natural: ";
	cin >> exponente;
	
	cout << "\n========== RESULTADO ==========" << endl << endl;
	cout << base << " elevado al exponente " << exponente << " es: "
		<< potencia(base, exponente) << endl;
	
	return 0;
}