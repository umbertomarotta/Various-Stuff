#include <iostream>
 
using namespace std;
 
int main(){
	int a, b, k;
	cout << "inserisci due numeri interi" << endl;
	cin >> a;
	cin >> b;
	cout << "\nil primo numero (a) e' " << a << endl;
	cout << "e il secondo numero (b)  e' " << b << endl;
	cout << "ma se scambiamo..." << endl;
	k = b;
	b = a;
	a = k;
	cout << "il primo numero (a) e' " << a << endl;
	cout << "e il secondo numero (b)  e' " << b << endl;
	return 0;
}