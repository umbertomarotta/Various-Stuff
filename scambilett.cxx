#include <iostream>
using namespace std;

int main ()
{
	int n;
	char X, Y;
	char stringa [50];
	cout << "Questo e'programma che legge una stringa e due caratteri X e Y, e modifica la stringa modificando tutti i caratteri X con Y e tutti i caratteri Y con X" << endl;
	cin >> stringa >> X >> Y;
	for ( n=0 ; n<50; n++ ){
		if (stringa[n] == X)
			stringa[n] = Y;
		else if (stringa[n] == Y)
			stringa[n] = X;
	}
	cout << endl << stringa << endl;
	return 0;
}