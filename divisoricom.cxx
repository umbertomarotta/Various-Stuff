#include <iostream>
using namespace std;

int main(){
	int a, b, x=0, k=1;
	cout << "Inserisci due numeri e ti diro' quanti divisori hanno in comune" << endl;
	cin >> a >> b ;
	if (b>a){
		k = b;
		b = a;
		a = k;
		k = 1;
	}
	do {
		if (a%k == 0 and b%k == 0){
				x = x + 1 ;
		}
		k = k+1;
	}
	while (a != k-1);
	cout << "Ecco a te: " << x << endl;
	return 0;
}