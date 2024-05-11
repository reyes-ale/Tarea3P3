
#include <iostream>
#include <locale>
using namespace std; 

int main() {
	setlocale(LC_ALL, "spanish"); 
    int *numeros= new int[20]; 
	int indice_numero=0; 
	int numero = 0; 

	for (int contador_numeros = 0; contador_numeros < 20; contador_numeros++) {
		cout << "Número " << indice_numero + 1 << ": ";

		cin >> numero; 

		while (numero < 10 || numero > 100) {
			cout << "El número debe estar entre 10-100 \n";
			cout << "Ingrese el número " << indice_numero + 1 << " nuevamente: "; 
			cin >> numero;
		}
		
		for (int posicion_ennumeros = 0; posicion_ennumeros < 20; posicion_ennumeros++){
			if (numeros[posicion_ennumeros] == numero) {
				contador_numeros--;
			}
		}

		numeros[contador_numeros] = numero;
		indice_numero++; 

	}

	for (int posicion_ennumeros = 0; posicion_ennumeros < 20; posicion_ennumeros++) {
		cout << "[" << numeros[posicion_ennumeros] << "]";
	}

}
