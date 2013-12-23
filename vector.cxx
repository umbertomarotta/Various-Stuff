#include <iostream>
using namespace std;

int billy [10];
int n, a, b, M;

int main ()
{
	cout << "Questo e'un programma che legge un vettore di 10 interi, modifica tale vettore scambiando l'elemento di indice 0 con quello di valore massimo e stampa il vettore cosi' ottenuto" << endl;
	cin >> billy[0];
	M = billy[0];
	for ( n=1 ; n<10 ; n++ ){
		cin >> billy[n];
		if ( M < billy[n] ){
			M = billy[n];
			a = n;
		}
	}
	billy[a] = billy[0];
	billy[0] = M;
	for ( n=0 ; n<10 ; n++ ){
		cout << billy[n] << " ";
	}
	cout << endl;
	return 0;
}