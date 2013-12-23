#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main ()
{
	inizio:
	int s=0, c=8, l=0, m;
	cout << "Con quanti interi per vettore vuoi lavorare? : ";
	scusa:
	while ( l <= 0){
		char inp [256];
		cin >> inp;
		cin.ignore(256,'\n');
		l = atoi (inp);
		if ( l <= 0 )
			cout << "Questo non va bene, riprova: ";
	}
		if ( l > 999999 ){
			cout << "No dai questo e' proprio esagerato, riprova: ";
			l = 0;
			goto scusa;
		}
		if ( l > 10 ){
			cout << "Questo numero sembra grande, vuoi riprovare? ";
			char inp [3];
			cin >> inp;
			cin.ignore(256,'\n');
			if ( inp[0] == 's' and inp[1] == 'i' or inp[0] == 's')
				goto inizio;
		}
	
	cout << "Stai lavorando con " << l << " elementi per vettore" << endl;
	int vet[l];
	char j;
	while (s != 6){
		cout << "--------------------------------------------------" << endl;
		cout << "Scegli cosa fare inserendo il numero:" << endl;
		cout << "1) Inserisci vettore" << endl;
		cout << "2) Cancella/cambia la lunghezza del vettore" << endl;
		cout << "3) Stampa vettore" << endl;
		cout << "4) Trova Max (trova il valore massimo nel vettore)" << endl;
		cout << "5) Trova Min (trova il valore minimo nel vettore)" << endl;
		cout << "6) Esci" << endl << endl;
		cin >> s;
		cin.ignore(256,'\n');
		cout << endl;

		if (s == 1){
			cout << "inserisci gli elementi del vettore: ";
			for (int i=0; i < l; i++)
				cin >> vet[i];
			c = 1;
			cin.ignore(256,'\n');
			cout << "Hai inserito il tuo vettore di " << l << " elementi" << endl << endl;
		}

		else if (s == 2){
			goto inizio;
			cout << "Coming soon" << endl << endl;
		}

		else if (s >= 3 and s < 6 and c != 1)
			cout << "Per fare questo hai bisogno di un vettore!" << endl << endl;

		else if (s == 3 and c == 1){
			cout << "il vettore inserito e' : ";
			for (int i=0; i < l; i++){
				cout << vet[i] << " ";
			}
			cout << endl << endl;
		}

		else if (s == 4 and c == 1){
			m = vet[0];
			for (int i=0; i < l; i++){
				if (m < vet[i])
					m = vet[i];
			}
			cout << "il valore massimo e' " << m << endl << endl;
		}

		else if (s == 5 and c == 1){
			m = vet[0];
			for (int i=0; i < l; i++){
				if (m > vet[i])
					m = vet[i];
			}
			cout << "il valore minimo e' " << m << endl << endl;
		}

		else if ( s == 6)
			cout << "Ciao!" << endl << endl;

		else
			cout << "Hai qualche problema a seguire le linee guida?" << endl << endl;

	}
	return 0;
}