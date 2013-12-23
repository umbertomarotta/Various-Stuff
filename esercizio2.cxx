#include <iostream>

using namespace std;

int main(){
	double b, h, a;
	cout << "\ninserisci base e altezza di un triangolo per saperne l'area" << endl;
	cin >> b;
	cin >> h;
	a = ( b * h ) / 2;
	cout << "\nl'area del triangolo e' " << a << endl;
	return 0;
}