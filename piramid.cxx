#include <iostream>
using namespace std;

int main(){
	int a, f=1, i=0 , p=1, k;
	cout << "Dimmi quante righe deve essere alto e ti disegno un simpatico triangolino: " ;
	cin >> a;
	cout << endl;
	do {
		k = p ;
		do {
			cout << f << " ";
			k = k-1;
			f = f+1; }
		while (k!=0 and f<105);
		cout << endl;
		p = p+1 ;
		a = a-1 ; }
	while (a!=0 and f<105);
	cout << endl;
	return 0;
}