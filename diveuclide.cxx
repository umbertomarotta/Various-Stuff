#include <iostream>
using namespace std;

int main(){
	int a, b, i, k;
	cout << "Dammi due numeri e ti diro'il loro massimo comune divisore" << endl;
	cout << "Il primo: ";
	cin >> a;
	cout << "Il secondo: ";
	cin >> b;
	if ( a!=b )
	do {
		if ( a > b)
		a = a-b;
		else
		b = b-a;
	}
	while ( a!=b );
	cout << "Ecco a te: " << a << endl;
	return 0;
}