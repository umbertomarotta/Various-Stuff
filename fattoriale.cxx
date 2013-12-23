#include <iostream>
using namespace std;

int main(){
	int a, f=1, i=0;
	cout << "Dammi un numero e ti diro'il suo fattoriale: " ;
	cin >> a;
	do {
		f = f *(a-i);
		i = i+1 ;
	}
	while ((a-i)!=1);
	cout << "Ecco a te: " << f << endl;
	return 0;
}