#include <iostream>
using namespace std;

int main(){
	int x, y, i, s;
	cout << "Dammi due numeri interi e ti faro'la somma tra i numeri tra essi compresi" << endl;
	cout << "Il primo: ";
	cin >> x;
	cout << "Il secondo: ";
	cin >> y;
	i = 0;
	s = 0;
	for (i=x;i<=y;i++){
		s = s + i;
	}
	cout << "La somma e' " << s << endl;
	return 0;
}