
#include <iostream>
#include <cstring>
using namespace std;


int main() {
	char cadenas [3][80];
	
	for (int contador = 0; contador < 3; contador++) {
		cout << "Cadena " << contador+1 << ": ";
		cin.getline(cadenas[contador], 80, '\n');
	}

	int centinela = 1; 

	while (centinela) {
		char palabra_buscada[80];
		cout << "Cadena: ";
		cin.getline(palabra_buscada, 80, '\n');

		for (int contador = 0; contador < 3; contador++) {
			if (strstr(cadenas[contador], palabra_buscada)) {
				cout << "Encontrado en cadena #" << contador + 1 << endl;
			}
		}
	}
	



























	
	/*for (int i = 0; i < 3; i++) {
		cout << "Cadena " << i + 1 << ": ";
		
		cin >> cadenas[i];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0;j < 80; j++) {
			cadenas[i][j] = '~';
		}
	}
	for (int i = 0; i < 3; i++) {
		for (size_t j = 0; j < 80; j++)
		{
			if (cadenas[i][j] != '~') {
				cout << "[" << cadenas[i][j] << "]";
			}
		}cout << endl; 
	}*/

	/*int centinela = 1;
	string cadena_a_buscar = ""; 

	while (centinela) {
		cout << "Cadena: ";
		cin >> cadena_a_buscar;
		for (int i = 0; i < 3; i++)  {
			if (cadenas[i] == cadena_a_buscar) {
				cout << "lo encontre en la cadena " << i+1 << endl; 
			}
		}
	}*/
}

