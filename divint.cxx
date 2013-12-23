#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, x=1, y=1, aa=1, cc=1;
	cout << "Inserisci 4 valori interi che corrispondono al numeratore e al denominatore di due frazioni" << endl;
	cin >> a;
	cout << "/";
	cin >> b;
	cout << "+" << endl;
	cin >> c;
	cout << "/";
	cin >> d;
	if (b==0 or c==0)
		cout << "Vuoi davvero dividere per zero?" << endl;
	else if (a%b != 0 or c%d != 0){
		aa = b;
		cc = d;
		y = b % d;
		while (y != 0) {
			b = d;
			d = y;
			y = b % d; //Adesso D e' il MCD//
		} 
		y = (aa*cc)/d; //Adesso Y e'il mcm//
		x = (y/aa)*a + (y/cc)*c;
		if (x%y == 0)
			cout << "Ecco il riusultato: " << x/y << endl;
		else
		cout << "Ecco a te la tua frazione: " << x << "/" << y << endl;
		return 0;
	}
	else
		cout << "Ecco il riusultato: " << a/b + c/d << endl;
}