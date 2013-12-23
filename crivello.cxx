#include <iostream>
#define NUM 100
using namespace std;

int main ()
{
	int n=0, i=0, v [NUM];
	for (n=0 ; n<NUM; n++){
		v[n] = 1;
	}
	for (i=2 ; i<NUM; i++){
		for (n=2 ; n<NUM; n++){
			if (n%i == 0 and i != n)
				v[n] = 0;
		}
	}
	for (n=0 ; n<NUM; n++){
		if (v[n] == 1)
			cout << n << " ";
	}
	if (n=NUM)
		cout << endl;
	return 0;
}