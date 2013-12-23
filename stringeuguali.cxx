#include <iostream>
using namespace std;

int main ()
{
	int n=0;
	char stringa [50], stringab [50];
	for (n=0 ; n<50; n++){
		stringa[n] = '0';
		stringab[n] = '0';
	}
	cin >> stringa;
	cin >> stringab;
	for ( n=0 ; n<50; n++ ){
		if (stringa[n] != stringab[n]){
			cout << "Sono diverse!" << endl;
			n = 90; //ho preferito non introdurre ulteriori variabili//
		}
	}
	if (n == 50)
		cout << "Sono uguali!" << endl;
	return 0;
}