#include <iostream>
using namespace std;

int main()
{
	double x, r ;
	cout << "Dammi un numero positivo o negativo: "   ;
	cin >> x ;
	if (x>0){
		cout << "Vedo che ti piacciono i numeri positivi, eccoti il suo quadrato: " ;
		r = x*x ;
		cout << r << endl ;
	}
	else if (x<0){
		cout << "Vedo che ti piacciono i numero negativi, eccoti il suo cubo: " ;
		r = x*x*x ;
		cout << r << endl ;
	}
	else {
		cout << "Speravo che il numero fosse negativo o almeno positivo..." ;
	}
	return 0;
}