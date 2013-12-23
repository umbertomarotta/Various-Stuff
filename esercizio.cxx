#include <iostream>
 
using namespace std;
 
int main(){
	double a, b, s, p, m;
	cout << "Inserisci due numeri Reali per conoscerne somma, prodotto e media" << endl;
	cin >> a;
	cin >> b;
	cout << "\nla somma e':" << endl;
	s = a + b;
	cout << s << endl;
	cout << "\nil prodotto e':" << endl;
	p = a * b;
	cout << p << endl;
	cout << "\nla media e':" << endl;
	m = ( a + b ) / 2;
	cout << m << endl;
	return 0;
}