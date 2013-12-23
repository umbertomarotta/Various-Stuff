#include <cstdlib>
#include <iostream>
using namespace std;

int main ()
{
	char stringa1[50], stringa2[50];
	cin >> stringa1;
	cin >> stringa2;
	int i=0;
	bool equal=true;
	while((stringa1[i]!='\0'and stringa2[i]!='\0') or !equal){
		if(stringa1[i] != stringa2[i]){
			cout << stringa1[i];
			equal=false;
		}
		i++;
	}
	if(equal){
		cout << "Sono ugualissime! maronn!" << endl;
	} else {
		cout << "O ma che e' oh!" << endl;
	}
	return 0;
