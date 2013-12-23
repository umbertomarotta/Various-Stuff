#include <iostream>
using namespace std;

int main(){
	int x, y;
	cout << "inserisci un numero intero e ti diro' se e' pari o dispari" << endl;
	cin >> x;
	y = x % 2;
	if ( y == 1 )
		cout << "\nil numero inserito e'dispari" << endl;
	else
		cout << "\nil numero inserito e'pari" << endl;
	return 0;
}