#include <iostream>
using namespace std;

int main(){
	int hei, init=0;
	cout << "Inserisci altezza: ";
	cin >> hei;
	for(int x=0; x<hei; x++){
		cout << endl;
		for(int y=init; y<init+hei+1; y++){
			cout << y << " ";
		}
	}
}