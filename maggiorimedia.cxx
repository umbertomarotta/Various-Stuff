#include <iostream>
using namespace std;

int main()
{
	double a, b, c, m;
	cout << "Inserisci tre numeri e ti diro' quali sono maggiori della loro media" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	m = (a+b+c)/3;
	cout << "\nI maggiori della loro media sono:" << endl;
	if (a>m)
		cout << a << endl;
	if (b>m)
		cout << b << endl;
	if (c>m)
		cout << c << endl;
	return 0;
}