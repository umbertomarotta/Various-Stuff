#include <iostream>
#include <stdlib.h>
#define NUM 100
using namespace std;

int main (){
	char a1 [NUM], a2 [NUM], a3 [NUM], b1 [NUM], b2 [NUM], b3 [NUM], c1 [NUM], c2 [NUM], c3 [NUM];
	int k=1, m=0, n;
	cout << "Inserisci i 9 elementi della matrice 3x3 che vuoi stampare, premi invo per passare da un elemento all'altro:" << endl << endl;

	cin.getline(a1,NUM);
	k = cin.gcount();
	if (m<k)
		m = k;

	cin.getline(a2,NUM);
	k = cin.gcount();
	if (m<k)
		m = k;

	cin.getline(a3,NUM);
	k = cin.gcount();
	if (m<k)
		m = k;

	cin.getline(b1,NUM);
	k = cin.gcount();
	if (m<k)
		m = k;
;
	cin.getline(b2,NUM);
	k = cin.gcount();
	if (m<k)
		m = k;

	cin.getline(b3,NUM);
	k = cin.gcount();
	if (m<k)
		m = k;

	cin.getline(c1,NUM);;
	k = cin.gcount();
	if (m<k)
		m = k;
	
	cin.getline(c2,NUM);
	k = cin.gcount();
	if (m<k)
		m = k;

	cin.getline(c3,NUM);
	k = cin.gcount();
	if (m<k)
		m = k;

	m--;

	cout << endl;
	
	cout.width(m);
	cout.fill('0');
	cout << a1 << " ";

	cout.width(m);
	cout.fill('0');
	cout << a2 << " ";

	cout.width(m);
	cout.fill('0');
	cout << a3 << endl;

	cout.width(m);
	cout.fill('0');
	cout << b1 << " ";

	cout.width(m);
	cout.fill('0');
	cout << b2 << " ";

	cout.width(m);
	cout.fill('0');
	cout << b3 << endl;

	cout.width(m);
	cout.fill('0');
	cout << c1 << " ";

	cout.width(m);
	cout.fill('0');
	cout << c2 << " ";

	cout.width(m);
	cout.fill('0');
	cout << c3 << endl;
	return 0;
}