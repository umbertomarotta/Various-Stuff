#include <iostream>
using namespace std;

int main(){
	double a, b, c, m;
	cout << "inserisci 3 numeri reali e ti diro'quali sono superiori alla loro media" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	m = (a+b+c)/3;
	cout << "\ni numeri reali superiori alla media (" << m << ") dei tre che mi hai dato sono:" << endl;
	if (a>m)
		cout << a << endl;
	if (b>m)
		cout << b << endl;
	if (c>m)
		cout << c << endl;
	return 0;
}


